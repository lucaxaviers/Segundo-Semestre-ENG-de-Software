#include <stdio.h>
#include <string.h>

int main() {
    char string[11];
    char invertida[11];
    int len;

    printf("Digite uma string: ");
    scanf("%10s", string);

    len = strlen(string);

    for (int i = 0; i < len; i++) {
        invertida[i] = string[len - 1 - i];
    }
    invertida[len] = '\0';

    printf("String original: %s\n", string);
    printf("String invertida: %s\n", invertida);

    // strcmp pra comparar
    if (strcmp(string, invertida) == 0) {
        printf("A string é um palíndromo\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}
