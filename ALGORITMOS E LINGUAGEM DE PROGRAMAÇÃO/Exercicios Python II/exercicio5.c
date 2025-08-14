#include <stdio.h>

int main() {
    int op;
    float a, b;

    printf("Escolha a operação:\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\nOpção: ");
    scanf("%d", &op);

    if (op < 1 || op > 4) {
        printf("Opção inválida!\n");
        return 0;
    }

    printf("Digite dois números: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case 1: printf("Resultado: %.2f\n", a + b); break;
        case 2: printf("Resultado: %.2f\n", a - b); break;
        case 3: printf("Resultado: %.2f\n", a * b); break;
        case 4:
            if (b == 0)
                printf("Erro: divisão por zero!\n");
            else
                printf("Resultado: %.2f\n", a / b);
            break;
    }

    return 0;
}
