#include <stdio.h>
#include <string.h>

int main() {
    char string[10]; 
    char invertida[10;
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

    return 0;
}
