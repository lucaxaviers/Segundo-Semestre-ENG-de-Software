export function classificarNota(nota: number): string {

  if (nota >= 6) {
    return "APROVADO";
  }

  if (nota >= 4 && nota < 6) {
    return "RECUPERACAO";
  }

  return "REPROVADO";
}
