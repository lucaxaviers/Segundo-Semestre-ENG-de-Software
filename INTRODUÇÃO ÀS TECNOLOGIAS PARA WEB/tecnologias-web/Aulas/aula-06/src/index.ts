/**
 * ============================================================================
 * DISCIPLINA: INTRODUÇÃO ÀS TECNOLOGIAS WEB (ITW) - PUC-CAMPINAS
 * PROFESSOR: José Guilherme Picolo
 * AULA 06: Backend com Node.js, TypeScript e Express
 * ============================================================================
 * 
 * OBJETIVO:
 * - Compreender o papel do Node.js executando JavaScript fora do navegador.
 * - Criar e configurar o primeiro servidor HTTP utilizando a biblioteca Express.
 * - Utilizar TypeScript no backend para tipagem estática e segurança do código.
 * - Entender o ciclo de compilação TS -> JS (pasta src -> pasta lib).
 * ============================================================================
 */

import express, { Request, Response } from "express";

// Inicializa a aplicação Express
const app = express();

// Porta na qual o servidor irá escutar as conexões
const PORT = 3000;

/**
 * Primeira rota: GET /
 * O método app.get() recebe o caminho da rota e uma função de callback
 * que recebe o objeto de requisição (req) e o objeto de resposta (res).
 */
app.get("/", (req: Request, res: Response) => {
  res.send("Servidor Express com TypeScript funcionando com sucesso!");
});

/**
 * Rota adicional de teste: GET /sobre
 * Demonstração de retorno em formato JSON
 */
app.get("/sobre", (req: Request, res: Response) => {
  res.json({
    disciplina: "Introdução às Tecnologias Web",
    instituicao: "PUC-Campinas",
    tecnologias: ["Node.js", "Express", "TypeScript"],
    status: "Servidor ativo"
  });
});

/**
 * Inicializa o servidor HTTP na porta definida
 */
app.listen(PORT, () => {
  console.log(`=======================================================`);
  console.log(`🚀 Servidor da Aula 06 rodando em: http://localhost:${PORT}`);
  console.log(`=======================================================`);
});
