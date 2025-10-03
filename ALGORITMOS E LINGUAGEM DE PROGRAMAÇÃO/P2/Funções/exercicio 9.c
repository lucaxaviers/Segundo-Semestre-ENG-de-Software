#include <stdio.h>
#include <ctype.h>

void pMaisculo(char palavra[]){
    
    for(int i = 0; palavra[i] != '\0'; i++){
        palavra[i] = toupper(palavra[i]);
    }
    
}

int main()
{
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%[^\n]", palavra);
    
    pMaisculo(palavra);
    
    printf("A palavra em maiúsculo: %s", palavra);

    return 0;
}
