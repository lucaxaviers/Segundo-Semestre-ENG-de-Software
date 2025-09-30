#include <stdio.h>

int main() {
    int a = 3;

    printf("a) int *p = a;\n");
    printf("Resposta: F\n\n");

    printf("b) int *p = &a;\n");
    printf("Resposta: V\n\n");

    printf("c) int *p = *a;\n");
    printf("Resposta: F\n\n");

    printf("d) Para alterar o valor apontado por um ponteiro 'p' para 4, fazemos 'p = 4'?\n");
    printf("Resposta: F\n\n");

    printf("e) Para alterar o valor apontado por um ponteiro 'p' para 4, fazemos '&p = 4'?\n");
    printf("Resposta: F\n\n");

    printf("f) Para alterar o valor apontado por um ponteiro 'p' para 4, fazemos '*p = 4'?\n");
    printf("Resposta: V\n\n");

    return 0;
}
