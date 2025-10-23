function verificarSetrianguloV4(
    a: number,
    b: number,
    c: number
): number {
    let resultado;
    if (a > 0 && b > 0 && c > 0) {
        if (a < (b + c) && b < (a + c) && c < (a + b)) {
            resultado = 0;
        } else {
            resultado = -1;
        }
    } else {
        resultado = -2;
    }
    return resultado;
}

function analisaVereditoTriangulo(r: number): string {
    let vereditoStr;
    switch (r) {
        case 0:
            vereditoStr = "Forma triângulo";
            break;
        case -1:
            vereditoStr = "Não forma triângulo pois um ou mais lados não atendem à regra dos triângulos";
            break;
        case -2:
            vereditoStr = "Um ou mais lados são inválidos (menores ou iguais a zero)";
            break;
        default:
            vereditoStr = "Resultado desconhecido";
    }
    return vereditoStr;
}

const str = analisaVereditoTriangulo(verificarSetrianguloV4(0, 0, 0));
console.log(str);
