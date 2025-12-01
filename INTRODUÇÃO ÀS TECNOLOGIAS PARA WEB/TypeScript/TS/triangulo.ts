export function isTriangulo(a: number, b: number, c: number): boolean {
    if( a < b + c && b < a + c && c < a + b){
        return true;
    }
    else{
        return false;
    }
}

export function classificarTriangulo(
  a: number,
  b: number,
  c: number
): string {

  if (isTriangulo(a, b, c)) {

    if (a === b && b === c) {
      return "EQUILATERO";
    }

    if (a === b || a === c || b === c) {
      return "ISOSCELES";
    }

    return "ESCALENO";
  }

  return "NAO FORMA TRIANGULO";
}

classificarTriangulo(3, 4, 5);
