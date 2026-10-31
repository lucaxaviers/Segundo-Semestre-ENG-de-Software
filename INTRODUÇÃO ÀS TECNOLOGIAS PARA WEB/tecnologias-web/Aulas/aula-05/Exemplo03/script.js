const formulario = document.querySelector("#formAluno");

const campoNome = document.querySelector("#nome");
const campoEmail = document.querySelector("#email");
const campoMatricula = document.querySelector("#matricula");
const campoNascimento = document.querySelector("#nascimento");
const campoCurso = document.querySelector("#curso");
const campoSemestre = document.querySelector("#semestre");
const campoSenha = document.querySelector("#senha");
const campoConfirmacaoSenha = document.querySelector("#confirmacaoSenha");
const campoTermos = document.querySelector("#termos");

const erroNome = document.querySelector("#erroNome");
const erroEmail = document.querySelector("#erroEmail");
const erroMatricula = document.querySelector("#erroMatricula");
const erroNascimento = document.querySelector("#erroNascimento");
const erroCurso = document.querySelector("#erroCurso");
const erroSemestre = document.querySelector("#erroSemestre");
const erroSenha = document.querySelector("#erroSenha");
const erroConfirmacaoSenha = document.querySelector("#erroConfirmacaoSenha");
const erroTermos = document.querySelector("#erroTermos");

const painelResultado = document.querySelector("#painelResultado");
const resultado = document.querySelector("#resultado");

const camposComErro = [
    campoNome,
    campoEmail,
    campoMatricula,
    campoNascimento,
    campoCurso,
    campoSemestre,
    campoSenha,
    campoConfirmacaoSenha,
    campoTermos
];

const mensagensDeErro = [
    erroNome,
    erroEmail,
    erroMatricula,
    erroNascimento,
    erroCurso,
    erroSemestre,
    erroSenha,
    erroConfirmacaoSenha,
    erroTermos
];

function mostrarErro(campo, elementoErro, mensagem) {
    campo.classList.add("is-invalid");
    elementoErro.innerText = mensagem;
}

function limparErros() {
    camposComErro.forEach(function (campo) {
        campo.classList.remove("is-invalid");
    });

    mensagensDeErro.forEach(function (elementoErro) {
        elementoErro.innerText = "";
    });
}

function calcularIdade(dataNascimento) {
    const hoje = new Date();
    const nascimento = new Date(`${dataNascimento}T00:00:00`);

    let idade = hoje.getFullYear() - nascimento.getFullYear();
    const aniversarioAindaNaoOcorreu =
        hoje.getMonth() < nascimento.getMonth()
        || (
            hoje.getMonth() === nascimento.getMonth()
            && hoje.getDate() < nascimento.getDate()
        );

    if (aniversarioAindaNaoOcorreu) {
        idade--;
    }

    return idade;
}


