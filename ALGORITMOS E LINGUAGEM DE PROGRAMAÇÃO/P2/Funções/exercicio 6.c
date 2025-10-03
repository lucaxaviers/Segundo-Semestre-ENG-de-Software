#include <stdio.h>
#include <string.h>

int contador(char string[], char c) {
    int cont = 0;                  
    int tamanho = strlen(string);  

    for (int i = 0; i < tamanho; i++) {
        if (string[i] == c) {
            cont++;
        }
    }
    return cont;
}

int main() {
    char letra;       
    char string[60];   

    printf("Digite uma palavra: ");
    scanf(" %[^\n]", string);  

    printf("Digite uma letra: ");
    scanf(" %c", &letra);      

    printf("A letra '%c' aparece %d vezes na palavra: %s\n", letra, contador(string, letra), string);

    return 0;
}
