export function calcularSalarioFinal(salario: number): string {
  let salarioFinal: number;

  if( salario <= 2000){
    salarioFinal = salario * 1.10;
  }
  else if( salario > 2000 && salario <= 3000){
    salarioFinal = salario * 1.07
  }
  else{
    salarioFinal = salario * 1.05;
  }
  return "SALARIO_FINAL: " + salarioFinal;
}
  
