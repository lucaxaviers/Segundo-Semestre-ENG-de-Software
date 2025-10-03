#include <stdio.h>

int contador(char string[]){
    int cont = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        cont++;
    }
    return cont;
}

int main()
{
    char string[60];
    printf("Digite uma palavra: ");
    scanf(" %[^\n]", string);  
    
    printf("O tamanho é: %d\n", contador(string));
    return 0;
}
