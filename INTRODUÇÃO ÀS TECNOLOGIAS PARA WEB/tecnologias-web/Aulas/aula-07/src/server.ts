/**
 * ============================================================================
 * DISCIPLINA: INTRODUÇÃO ÀS TECNOLOGIAS WEB (ITW) - PUC-CAMPINAS
 * PROFESSOR: José Guilherme Picolo
 * AULA 07: Rotas e API REST com Node.js, Express e TypeScript
 * ============================================================================
 * 
 * OBJETIVO DIDÁTICO DESTA AULA:
 * 1. Compreender o que é uma API REST: uma interface padronizada que devolve dados
 *    estruturados em JSON (e não código HTML visual).
 * 2. Trabalhar com RECURSOS (substantivos no plural, ex: /alunos).
 * 3. Compreender o conceito de ENDPOINT: Método HTTP + Caminho da URL.
 * 4. Utilizar os 4 métodos HTTP essenciais:
 *    - GET: Consultar dados
 *    - POST: Criar novo recurso
 *    - PUT: Atualizar um recurso existente
 *    - DELETE: Inativar ou remover um recurso
 * 5. Utilizar os dados da requisição:
 *    - req.params: parâmetros vindos na URL (ex: /alunos/:id)
 *    - req.query: filtros passados após a ? na URL (ex: /alunos?situacao=Ativo)
 *    - req.body: dados enviados no corpo da requisição em formato JSON
 * 6. Utilizar o middleware ESSENCIAL: express.json()
 * 7. Responder com STATUS HTTP semânticos (200, 201, 400, 404, 500)
 * 8. Simular persistência com banco em memória (array) antes da introdução ao Oracle.
 * ============================================================================
 */

import express, { Request, Response } from "express";
import cors from "cors";

// ============================================================================
// 1. MODELAGEM DOS DADOS (TYPESCRIPT) - [Slide 15]
// ============================================================================
// O TypeScript nos permite criar contratos de dados para garantir que não haja
// erros de digitação (ex: "Ativo", "ativo", "ATIVO") e manter o contrato consistente.

// Tipos literais com valores válidos permitidos:
type SituacaoAluno = "Ativo" | "Trancado" | "Formado" | "Em análise" | "Inativo";

type CursoAluno =
  | "Engenharia de Software"
  | "Ciência da Computação"
  | "Sistemas de Informação"
  | "ADS";

// Interface que define a forma (contrato) de um objeto Aluno:
interface Aluno {
  id: number;
  nome: string;
  email: string;
  curso: CursoAluno;
  semestre: number;
  situacao: SituacaoAluno;
}

// ============================================================================
// 2. CONFIGURAÇÃO DO SERVIDOR E MIDDLEWARES - [Slides 11 a 13]
// ============================================================================
const app = express();
const PORT = 3000;

// Permite requisições de origens cruzadas (CORS), essencial quando o frontend
// rodar em outra porta e fizer chamadas via fetch() para a API.
app.use(cors());

/**
 * MIDDLEWARE ESSENCIAL: express.json() [Slide 13]
 * 
 * Por padrão, o Express NÃO sabe ler JSON no corpo das requisições (req.body).
 * Esse middleware intercepta a requisição antes das rotas POST e PUT e converte
 * o JSON recebido em um objeto JavaScript acessível em `req.body`.
 * 
 * ERRO COMUM DE ALUNO: Esquecer essa linha e req.body chegar undefined!
 */
app.use(express.json());

// ============================================================================
// 3. BANCO DE DADOS EM MEMÓRIA (PROVISÓRIO) - [Slide 16]
// ============================================================================
// Por enquanto, não usamos banco de dados real. Um array em memória permite
// focar na lógica de rotas, parâmetros e verbos HTTP.
// Obs.: Quando o servidor reinicia, os dados voltam ao estado inicial.
// Mais adiante na disciplina, este array será substituído pelo banco Oracle.

let alunos: Aluno[] = [
  {
    id: 1,
    nome: "Ana Clara Martins",
    email: "ana@instituicao.edu.br",
    curso: "Engenharia de Software",
    semestre: 2,
    situacao: "Ativo"
  }
];

// Contador para gerar o próximo ID único incremental:
let proximoId = 2;

// ============================================================================
// 4. ROTAS DA API REST
// ============================================================================

/**
 * ROTA RAIZ: GET /
 * Retorna uma mensagem de status do servidor para testar se está no ar.
 */
app.get("/", (req: Request, res: Response) => {
  return res.status(200).json({
    mensagem: "Servidor Express da Aula 07 funcionando perfeitamente!",
    endpointsDisponiveis: {
      listarTodosOuFiltrar: "GET /alunos ou GET /alunos?situacao=Ativo",
      buscarPorId: "GET /alunos/:id",
      criarAluno: "POST /alunos",
      atualizarAluno: "PUT /alunos/:id",
      inativarAluno: "DELETE /alunos/:id"
    }
  });
});

/**
 * ----------------------------------------------------------------------------
 * ROTA 1: GET /alunos [Slides 17 e 24]
 * ----------------------------------------------------------------------------
 * Ação: Listar todos os alunos cadastrados.
 * Recurso com Query Parameters (Filtros):
 * - Se a URL contiver `?situacao=Ativo`, filtra por situação.
 * - Caso contrário, devolve a lista completa.
 * 
 * Status retornado: 200 (OK)
 */
app.get("/alunos", (req: Request, res: Response) => {
  // Lendo filtro opcional da query string (?situacao=...)
  const situacao = req.query.situacao as string | undefined;

  if (situacao) {
    // Filtra os alunos que possuem a situação informada
    const filtrados = alunos.filter((item) => item.situacao === situacao);
    return res.status(200).json(filtrados);
  }

  // Se nenhum filtro foi passado, retorna todos os alunos
  return res.status(200).json(alunos);
});

/**
 * ----------------------------------------------------------------------------
 * ROTA 2: GET /alunos/:id [Slide 18]
 * ----------------------------------------------------------------------------
 * Ação: Buscar um aluno específico através do seu ID.
 * Parâmetro de rota: `:id` é a parte variável da URL.
 * 
 * Regra didática:
 * - `req.params.id` chega como string (texto).
 * - Usamos `Number(req.params.id)` para comparar com o id numérico do objeto.
 * - Se o aluno NÃO for encontrado: retorna status 404 (Not Found).
 * - Se for encontrado: retorna status 200 (OK) com o objeto.
 */
app.get("/alunos/:id", (req: Request, res: Response) => {
  // 1. Recebe o parâmetro da rota e converte para número
  const id = Number(req.params.id);

  // 2. Procura o aluno no array
  const aluno = alunos.find((item) => item.id === id);

  // 3. Valida se encontrou: se não existir, responde 404 e interrompe com return
  if (!aluno) {
    return res.status(404).json({ mensagem: "Aluno não encontrado." });
  }

  // 4. Responde com o aluno encontrado
  return res.status(200).json(aluno);
});

/**
 * ----------------------------------------------------------------------------
 * ROTA 3: POST /alunos [Slides 19 e 20]
 * ----------------------------------------------------------------------------
 * Ação: Cadastrar um novo aluno.
 * Dados: Enviados no corpo da requisição (req.body) em formato JSON.
 * 
 * Regra didática:
 * - Validação básica no backend (proteção defensiva): confere campos obrigatórios.
 * - Se faltar algum campo: retorna status 400 (Bad Request).
 * - Todo aluno novo nasce automaticamente com a situação "Ativo".
 * - Sucesso na criação: retorna status 201 (Created) e o novo aluno com seu ID.
 */
app.post("/alunos", (req: Request, res: Response) => {
  // 1. Extrai os campos do corpo da requisição (req.body)
  const { nome, email, curso, semestre } = req.body;

  // 2. Validação: verifica se os dados obrigatórios foram fornecidos
  if (!nome || !email || !curso || !semestre) {
    return res.status(400).json({
      mensagem: "Nome, e-mail, curso e semestre são obrigatórios."
    });
  }

  // 3. Criação do novo objeto respeitando a interface Aluno
  const novoAluno: Aluno = {
    id: proximoId,
    nome,
    email,
    curso,
    semestre: Number(semestre),
    situacao: "Ativo" // Regra de negócio: todo aluno nasce Ativo
  };

  // 4. Salva no nosso array em memória e incrementa o ID
  alunos.push(novoAluno);
  proximoId++;

  // 5. Responde com status 201 (Created)
  return res.status(201).json(novoAluno);
});

/**
 * ----------------------------------------------------------------------------
 * ROTA 4: PUT /alunos/:id [Slide 22]
 * ----------------------------------------------------------------------------
 * Ação: Atualizar completamente os dados de um aluno existente.
 * 
 * Fluxo mental da rota:
 * 1. Localiza o aluno pelo ID da rota (`req.params.id`). Se não existir -> 404.
 * 2. Valida se os campos obrigatórios vieram no corpo (`req.body`). Se faltar -> 400.
 * 3. Atualiza os dados no objeto existente.
 * 4. Responde com status 200 (OK) e o aluno atualizado.
 */
app.put("/alunos/:id", (req: Request, res: Response) => {
  const id = Number(req.params.id);

  // 1. Procura o registro
  const aluno = alunos.find((item) => item.id === id);
  if (!aluno) {
    return res.status(404).json({ mensagem: "Aluno não encontrado." });
  }

  // 2. Lê os novos dados
  const { nome, email, curso, semestre, situacao } = req.body;
  if (!nome || !email || !curso || !semestre || !situacao) {
    return res.status(400).json({
      mensagem: "Todos os campos são obrigatórios (nome, email, curso, semestre, situacao)."
    });
  }

  // 3. Atualiza os campos do objeto em memória
  aluno.nome = nome;
  aluno.email = email;
  aluno.curso = curso;
  aluno.semestre = Number(semestre);
  aluno.situacao = situacao;

  // 4. Retorna status 200 e o aluno atualizado
  return res.status(200).json(aluno);
});

/**
 * ----------------------------------------------------------------------------
 * ROTA 5: DELETE /alunos/:id [Slide 23]
 * ----------------------------------------------------------------------------
 * Ação: Inativação lógica do aluno.
 * 
 * Por que inativação lógica em vez de exclusão física?
 * - Exclusão física (remover do array com splice): apaga permanentemente o registro.
 * - Inativação lógica (mudar situacao = "Inativo"): preserva histórico acadêmico
 *   e rastreabilidade dos dados no sistema.
 * 
 * Status retornado: 200 (OK)
 */
app.delete("/alunos/:id", (req: Request, res: Response) => {
  const id = Number(req.params.id);

  // 1. Procura o aluno
  const aluno = alunos.find((item) => item.id === id);
  if (!aluno) {
    return res.status(404).json({ mensagem: "Aluno não encontrado." });
  }

  // 2. Inativação lógica: apenas atualiza o status para "Inativo"
  aluno.situacao = "Inativo";

  // 3. Responde informando o sucesso da inativação
  return res.status(200).json({
    mensagem: "Aluno inativado com sucesso.",
    aluno
  });
});

// ============================================================================
// 5. INICIALIZAÇÃO DO SERVIDOR - [Slide 4]
// ============================================================================
app.listen(PORT, () => {
  console.log(`=======================================================`);
  console.log(`🚀 Servidor da Aula 07 rodando em http://localhost:${PORT}`);
  console.log(`📡 Recurso principal disponível em http://localhost:${PORT}/alunos`);
  console.log(`=======================================================`);
});
