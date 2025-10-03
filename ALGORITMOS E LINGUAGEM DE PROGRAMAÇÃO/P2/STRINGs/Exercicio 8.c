#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char palavra[]){
    
    int tamanho = strlen(palavra);
    char inversa[tamanho];
    
    for( int i = 0; i < tamanho; i++){
        
        inversa[i] = palavra[tamanho - 1 - i];
        
    }
    
    inversa[tamanho] = '\0'; 

    // strcmp usado para comparar strings
    if (strcmp(inversa, palavra) == 0) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main()
{
    int resultado;
    char string[50];
    
    printf("Digite uma palavra: ");
    scanf(" %[^\n]", string);
    
     // Converte para minusculo
    for (int i = 0; string[i]; i++) {
        string[i] = tolower(string[i]);
    }
    
    resultado = palindromo(string);
    
    if(resultado == 1){
        printf("1, Ou seja é palíndromo");
    }
    else{
        printf("0, Não é palíndromo");
    }
    
    return 0;
}
