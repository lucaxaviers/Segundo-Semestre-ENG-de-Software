export function classificarVelocidade(velocidade: number, maximo: number): string {
  if( velocidade <= maximo){
    return "DENTRO DO LIMITE"
  }
  if( velocidade > maximo && velocidade < (maximo * 1.2)){
    return "ACIMA DO LIMITE";
  }
  return "MULTA";
}
