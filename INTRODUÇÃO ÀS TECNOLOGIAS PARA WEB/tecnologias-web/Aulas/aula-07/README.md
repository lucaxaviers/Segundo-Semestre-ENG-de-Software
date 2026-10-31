# Projeto Prático: Aula 07 - Rotas e API REST
**Disciplina:** Introdução às Tecnologias Web (ITW) - PUC-Campinas  
**Professor:** José Guilherme Picolo  

---

## 📌 O que foi passado na Aula 07?

Na Aula 07, demos o passo fundamental que conecta o backend ao conceito de **API REST**:
1. **API REST não é página HTML:** O backend não desenha telas; ele fornece dados estruturados em **JSON** para clientes (navegador, aplicativo mobile, etc.) consumirem.
2. **Conceito de Recurso:** Organização das rotas em torno de substantivos no plural (exemplo: `/alunos`).
3. **Endpoint = Método HTTP + Caminho:** A ação pretendida é informada pelo **método HTTP**, e não pelo nome da URL:
   - `GET /alunos`: Listar alunos
   - `GET /alunos/:id`: Buscar aluno por ID
   - `POST /alunos`: Criar novo aluno
   - `PUT /alunos/:id`: Atualizar aluno existente
   - `DELETE /alunos/:id`: Inativar aluno (exclusão lógica)
4. **Middlewares Essenciais:** `app.use(express.json())` é fundamental para o Express conseguir ler dados em JSON no `req.body`.
5. **Dados da Requisição no Express:**
   - `req.params`: Parâmetros definidos na rota (ex: `/alunos/:id`).
   - `req.query`: Parâmetros de filtro na URL após `?` (ex: `?situacao=Ativo`).
   - `req.body`: Dados enviados no corpo da requisição (no POST e PUT).
6. **Status Codes Semânticos:**
   - `200 OK`: Consulta ou atualização bem-sucedida.
   - `201 Created`: Novo registro criado com sucesso.
   - `400 Bad Request`: Dados obrigatórios faltando ou inválidos.
   - `404 Not Found`: ID ou recurso não encontrado.
   - `500 Internal Server Error`: Erro inesperado do servidor.
7. **Simulação com Banco em Memória:** Uso de um `array` TypeScript provisório (`let alunos: Aluno[] = [...]`) para fixar a lógica de rotas antes de conectar ao banco Oracle nas aulas futuras.

---

## 📁 Estrutura de Arquivos

```text
aula07-api/
├── package.json        # Dependências e scripts do projeto
├── tsconfig.json       # Configurações do compilador TypeScript
├── requests.http       # Exemplos de chamadas para testar a API
├── README.md           # Explicação didática e guia de execução
└── src/
    └── server.ts       # Código-fonte didaticamente comentado da API
```

---

## 🚀 Como Executar o Projeto

1. Abra o terminal na pasta do projeto:
   ```bash
   cd "C:\Users\25000508\Downloads\aula web\aula07-api"
   ```

2. Instale as dependências:
   ```bash
   npm install
   ```

3. Inicie o servidor em modo de desenvolvimento (com recarregamento automático):
   ```bash
   npm run dev
   ```

4. O servidor iniciará em `http://localhost:3000`.

---

## 🧪 Como Testar as Rotas

Você pode utilizar a extensão **Thunder Client** ou **REST Client** no VS Code com o arquivo `requests.http`, ou ferramentas como **Insomnia** / **Postman**.

| Método | Endpoint | Descrição | Status Sucesso |
| :--- | :--- | :--- | :--- |
| **GET** | `/alunos` | Lista todos os alunos cadastrados | `200 OK` |
| **GET** | `/alunos?situacao=Ativo` | Filtra alunos por situação | `200 OK` |
| **GET** | `/alunos/:id` | Busca um aluno específico pelo ID | `200 OK` (ou `404`) |
| **POST** | `/alunos` | Cadastra um novo aluno | `201 Created` (ou `400`) |
| **PUT** | `/alunos/:id` | Atualiza os dados de um aluno | `200 OK` (ou `400`/`404`) |
| **DELETE** | `/alunos/:id` | Inativação lógica do aluno | `200 OK` (ou `404`) |

---

## ⚠️ Erros Comuns Alertados pelo Professor

* **Esquecer `app.use(express.json())`:** Faz o `req.body` chegar como `undefined` nas requisições `POST` e `PUT`.
* **Não converter o ID:** `req.params.id` chega como `string`. É obrigatório converter para `Number(req.params.id)`.
* **Esquecer o `return` nas respostas:** O Express não pode responder duas vezes (`Cannot set headers after they are sent to the client`). Sempre use `return res.status(...).json(...)`.
* **Usar status HTTP errado:** Retornar 200 em caso de erro confunde o frontend.
* **Rotas com verbos:** Nunca crie rotas como `/cadastrarAluno` ou `/excluirAluno`. A intenção da ação pertence ao método HTTP (`POST`, `DELETE`).
