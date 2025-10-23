function verificarSetrianguloV1(
    a:number,
    b:number,
    c:number

): boolean{

    let triangulo = false;
    if( a > 0){
        if(b > 0){
            if(c > 0){
                if(a < (b + c)){
                    if(b < (a + c)){
                        if( c < (a + b)){
                            triangulo = true;
                        }
                    }
                }
            }
        }   
    }
    return triangulo;
}

const res = verificarSetrianguloV1(11 , 9 , 13);
console.log(res);
