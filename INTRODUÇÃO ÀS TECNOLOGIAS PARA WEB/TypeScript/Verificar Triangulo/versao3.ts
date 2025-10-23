function verificarSetrianguloV3(
    a:number,
    b:number,
    c:number

): boolean{

    let triangulo = false;
    if( a > 0 && b > 0 && c > 0){
        if( a < (b + c) && b < (a + c) && c < (a + b)){
            triangulo = true;
            console.log("Forma um triangulo")
        }else{
            console.log("Não forma triangulo, Um ou mais lados não atende a regra de ser menr que a soma dos demais")
        }
    }else{
        console.log("Não forma triangulo, Um ou mais lados são zeros os negativos")
    }
    return triangulo;

}

const res = verificarSetrianguloV3(10 ,11 , 10);
console.log(res);
