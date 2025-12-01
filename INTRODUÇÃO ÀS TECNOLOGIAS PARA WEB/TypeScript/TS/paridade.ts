export function classificarNumero(n: number): string {
  if (n !== 0) {
    if (n % 2 == 0) {
      return "PAR";
    } else {
      return "IMPAR";
    }
  } else {
    return "ZERO";
  }
}
