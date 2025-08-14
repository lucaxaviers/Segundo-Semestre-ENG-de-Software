#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero (Negativo para parar): ");
    scanf("%d", &numero);

    while (numero >= 0) 
    {
        for (i = numero - 1; i > 0; i--) 
        {
            numero *= i;
        }

        printf("Fatorial = %d\n", numero);

        printf("Digite um numero (Negativo para parar): ");
        scanf("%d", &numero);
    }

    return 0;
}
