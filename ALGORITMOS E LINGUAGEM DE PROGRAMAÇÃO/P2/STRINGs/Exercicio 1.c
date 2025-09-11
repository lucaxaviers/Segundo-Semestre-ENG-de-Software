#include <stdio.h>
#include <string.h>

int main() {
    char letra;
    char palavra[20];
    int cont = 0;

    printf("Digite a letra: ");
    scanf(" %c", &letra);

    printf("Digite a palavra: ");
    scanf("%20s", palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra) {
            count++;
        }
    }

    printf("A letra '%c' aparece %d vezes na palavra.\n", letra, count);

    return 0;
}

