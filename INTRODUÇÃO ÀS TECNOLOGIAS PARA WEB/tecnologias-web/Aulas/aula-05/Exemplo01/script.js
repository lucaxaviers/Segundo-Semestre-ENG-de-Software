console.log("O arquivo JavaScript foi carregado.");

let nome = "Maria";
let idade = 20;
const universidade = "PUC-Campinas";

console.log(nome, idade, universidade);

if (idade >= 18) {
    console.log(`${nome} é maior de idade.`);
}

function verificarPrioridade(prioridade) {
    if (prioridade === "alta") {
        return "A demanda precisa de atenção imediata.";
    }

    return "A demanda seguirá o fluxo normal.";
}

const mensagem = verificarPrioridade("alta");
console.log(mensagem);
