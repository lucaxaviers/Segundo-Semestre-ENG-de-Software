#include <stdio.h>
#include <ctype.h>  

int main() {
    char texto[100];
    int vogais = 0, consoantes = 0;

    printf("Digite uma palavra ou texto (sem espaços): ");
    scanf("%s", texto); 

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);  
        if (c >= 'a' && c <= 'z') {  
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vogais++;
            } else 
            {
                consoantes++;
            }
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}
