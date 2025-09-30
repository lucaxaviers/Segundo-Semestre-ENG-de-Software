#include <stdio.h>
#include <ctype.h> // Para usar toupper()

int main() {
    char nome[101]; // Até 100 caracteres + '\0'

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nome); // Lê toda a linha até o Enter

    // Imprime a primeira letra do nome
    if (nome[0] != '\0') {
        printf("%c", toupper(nome[0]));
    }

    // Percorre o restante da string
    for (int i = 0; nome[i] != '\0'; i++) {
        // Se o caractere atual é espaço, imprime a próxima letra como inicial
        if (nome[i] == ' ' && nome[i + 1] != '\0' && nome[i + 1] != ' ') {
            printf("%c", toupper(nome[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
