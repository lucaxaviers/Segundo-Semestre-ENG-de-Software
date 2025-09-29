#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase); 
    
    int len = strlen(frase);
    
    for (int x = 0; x < len; x++) {
        if (frase[x] == ' ') {
            printf("\n"); 
        } else {
            printf("%c", frase[x]); 
        }
    }
    
    return 0;
}
