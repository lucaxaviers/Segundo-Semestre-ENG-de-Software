const tituloPagina = document.querySelector("#tituloPagina");
const campoTitulo = document.querySelector("#titulo");
const campoCategoria = document.querySelector("#categoria");
const botaoExibir = document.querySelector("#btnExibir");
const resultado = document.querySelector("#resultado");

tituloPagina.innerText = "Cadastro de atividade — página interativa";

botaoExibir.addEventListener("click", function () {
    const titulo = campoTitulo.value;
    const categoria = campoCategoria.value;

    resultado.innerText = `Título informado: ${titulo} | Categoria: ${categoria}`;
    resultado.classList.remove("d-none");
});
