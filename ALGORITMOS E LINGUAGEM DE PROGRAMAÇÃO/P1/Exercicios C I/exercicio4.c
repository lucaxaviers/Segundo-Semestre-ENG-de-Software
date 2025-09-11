#include <stdio.h>
int main() {
    double peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("IMC:%lf", imc);

    return 0;
}
