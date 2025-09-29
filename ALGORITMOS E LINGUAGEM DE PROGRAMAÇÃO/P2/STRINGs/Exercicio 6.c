#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];
    int contconsoante = 0, contvogal = 0;
    
    printf("Digite uma palavra:  ");
    scanf("%[^\n]", palavra);
    
    int len = strlen(palavra);
    
    for( int x = 0; x < len; x++){
        
        char i = palavra[x];
        
        if( i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
            contvogal++;
        }
        else{
            contconsoante++;
        }
    }
    
    printf("Vogais: %d \n", contvogal);
    printf("Consotantes: %d", contconsoante);

    return 0;
}
