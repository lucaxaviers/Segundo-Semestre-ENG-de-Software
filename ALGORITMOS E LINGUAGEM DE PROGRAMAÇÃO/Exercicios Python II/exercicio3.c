#include <stdio.h>

int main() {
    float nota;

    printf("Digite uma nota de 0 a 10: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota inválida.\n");
    } else if (nota < 5) {
        printf("Classificação: Insuficiente\n");
    } else if (nota < 7) {
        printf("Classificação: Regular\n");
    } else if (nota < 9) {
        printf("Classificação: Bom\n");
    } else {
        printf("Classificação: Excelente\n");
    }

    return 0;
}
