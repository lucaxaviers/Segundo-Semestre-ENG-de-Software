export function classificarAno(ano: number): string {
  if( ano % 4 == 0  && ano % 100 != 0 || ano % 400 == 0  ){
    return "BISEXTO";
  }
  return "NORMAL";
}
classificarAno(2025);
