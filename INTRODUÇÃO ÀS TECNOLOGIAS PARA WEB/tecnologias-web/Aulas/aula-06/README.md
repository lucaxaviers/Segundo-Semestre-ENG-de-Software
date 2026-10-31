# Aula 6 - Backend com Node.js, TypeScript e Express

Esta pasta reúne a introdução ao desenvolvimento **Backend**, cobrindo a execução de JavaScript fora do navegador via **Node.js**, gerenciamento de dependências com **npm**, tipagem estática e compilação com **TypeScript**, e a criação do primeiro servidor HTTP com **Express**.

## Arquivos

- `package.json` — configuração do projeto Node.js, dependências (`express`) e scripts de build/execução.
- `tsconfig.json` — opções de compilação do TypeScript configuradas com regras estritas (`strict: true`, `rootDir`, `outDir`).
- `Aula06.pdf` — material teórico e slides oficiais da aula.
- `src/index.ts` — primeiro servidor Express desenvolvido em TypeScript ouvindo a porta 3000 e tratando requisições `GET`.

## Conteúdo Praticado

- **Node.js:**
  - Conceito de ambiente de execução baseado na V8 Engine da Google.
  - Diferenças fundamentais entre Frontend (Navegador, DOM, CSS) e Backend (Servidor, HTTP, Banco de dados).
  - Comandos essenciais: `node -v` e `npm init -y`.
- **Express:**
  - Instalação e uso do microframework Express (`npm i express`).
  - Criação de instâncias do Express (`const app = express()`).
  - Atendimento a requisições com `app.get()`, `req: Request` e `res: Response`.
  - Escuta de conexões via `app.listen(PORT, callback)`.
- **TypeScript no Backend:**
  - Instalação como dependência de desenvolvimento (`npm i typescript -D`).
  - Definições de tipos estáticos (`npm i @types/node @types/express -D`).
  - Inicialização do arquivo de configuração (`npx tsc --init`).
  - Ciclo de compilação de código TS (`src/`) para código JS puro (`lib/`).
  - Monitoramento contínuo em tempo de desenvolvimento com `tsc-watch`.

## Como Executar

1. Abra o terminal nesta pasta:
   ```bash
   cd Aulas/aula-06
   ```
2. Instale as dependências:
   ```bash
   npm install
   ```
3. Para compilar o TypeScript:
   ```bash
   npm run build
   ```
4. Para executar o servidor em modo de desenvolvimento contínuo:
   ```bash
   npm run dev
   ```
5. Acesse no navegador: `http://localhost:3000`
