# Aula 5 - JavaScript, DOM e Validações de Formulários

Esta pasta reúne os conceitos, exemplos didáticos e exercícios práticos sobre a introdução ao **JavaScript no navegador**, manipulação da árvore **DOM** (Document Object Model) e validações dinâmicas de formulários.

## Arquivos

- `index.html` — portal de navegação com acesso aos três laboratórios da aula.
- `Aula05.pdf` — material teórico e slides oficiais da aula.
- `Exemplo01/` — laboratório focado em sintaxe moderna (`const`, `let`), tipos primitivos, operadores lógicos/relacionais estritos (`===`), funções e depuração via console.
- `Exemplo02/` — laboratório de interação com o DOM, seleção de elementos via `querySelector`, escuta de eventos de clique com `addEventListener`, alteração de texto (`innerText`) e classes visuais (`classList`).
- `Exemplo03/` — formulário acadêmico completo com Bootstrap 5, interceptação de envio com `event.preventDefault()`, validações campo a campo, feedback visual dinâmico com a classe `is-invalid`, cálculo de idade a partir da data de nascimento e serialização para objeto/JSON.

## Conteúdo Praticado

- **Fundamentos do JavaScript:**
  - Declaração de variáveis modernas com `const` (padrão) e `let` (reatribuição).
  - Tipos de dados essenciais: `string`, `number`, `boolean`, `Date` e `Object`.
  - Comparação estrita com `===` (valor e tipo).
  - Funções puras e retorno antecipado (`return`) para fluxo defensivo.
- **Manipulação do DOM:**
  - `document.querySelector()` e `document.getElementById()`.
  - Leitura de dados de entrada com a propriedade `.value` e tratamento com `.trim()`.
  - Alteração de nós e conteúdo com `.innerText`.
  - Controle de visibilidade e estilização dinâmica com `.classList.add()`, `.classList.remove()`.
- **Eventos e Ciclo de Formulário:**
  - `addEventListener("submit", function(event) { ... })`.
  - Bloqueio do recarregamento padrão da página com `event.preventDefault()`.
- **Validação de Formulários & Tratamento de Erros:**
  - Limpeza de mensagens anteriores antes de nova validação.
  - Sinalização de erros com `.classList.add("is-invalid")`.
  - Validação em múltiplas camadas (Frontend para experiência do usuário, Backend para segurança).
- **Objetos e JSON:**
  - Agrupamento de dados validados em um objeto JavaScript.
  - Conversão para formato de transporte via `JSON.stringify()`.

## Como Visualizar

1. Abra o arquivo `index.html` desta pasta diretamente no navegador;
2. Ou abra a pasta no VS Code e clique em **Go Live** com a extensão **Live Server** para navegar entre os três exemplos em tempo real.
