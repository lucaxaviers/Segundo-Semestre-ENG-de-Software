#include <stdio.h>
int main() {
    double salario_inicial, percentual,
     novo_salario;

    printf("Digite o salário atual: ");
    scanf("%lf", &salario_inicial);

    printf("Digite o percentual de reajuste: ");
    scanf("%lf", &percentual);

    novo_salario = 
    salario_inicial * (1 + percentual / 100);

    printf("Salário atual:", salario_inicial);
    printf("Percentual de reajuste:",
percentual);
    printf("Novo salário:", novo_salario);

    return 0;
}
