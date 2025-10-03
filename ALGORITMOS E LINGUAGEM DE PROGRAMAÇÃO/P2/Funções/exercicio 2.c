#include <stdio.h>

double lerNumeroReal() {
    
    double numeroReal;
    printf("Digite um número real: ");
    scanf("%lf", &numeroReal);
    return numeroReal;
}

double obterParteFracionaria(double numeroReal) {
    
    int parteInteira = (int)numeroReal;
    double parteFracionaria = numeroReal - parteInteira;
    return parteFracionaria;
}

int main() {
    
    double numero = lerNumeroReal();
    double parteFracionaria = obterParteFracionaria(numero);

    printf("Número digitado: %.3lf\n", numero);
    printf("Parte fracionária: %.3lf\n", parteFracionaria);

    return 0;
}
