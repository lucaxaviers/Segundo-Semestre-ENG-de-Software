#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sobrenome[50];
    char nomeCompleto[100];
    int len;

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%49s", sobrenome);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, sobrenome);

    len = strlen(nomeCompleto);

    printf("String final: %s\n", nomeCompleto);
    printf("Tamanho da string: %d\n", len);
    printf("Primeira letra: %c\n", nomeCompleto[0]);
    printf("Última letra: %c\n", nomeCompleto[len - 1]);

    return 0;
}
