#include <stdio.h>
#include <string.h>

void copiadora(char original[], char copia[]){
    
    int tamanho = strlen(original);
    for( int i = 0; i < tamanho; i++){
        copia[i] = original[i];
    }
}

int main()
{
    
    char original[50], copia[50];
    printf("Digite algo: ");
    scanf("%[^\n]", original);
    
    copiadora(original, copia);
    
    printf("Cópia da string: %s\n", copia);

    return 0;
}
