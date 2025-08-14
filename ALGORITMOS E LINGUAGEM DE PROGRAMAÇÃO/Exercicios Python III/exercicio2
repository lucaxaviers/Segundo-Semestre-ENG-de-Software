#include <stdio.h>

int main() {
    int numero, max, min;
    int cont = 0;

    printf("Digite um numero (zero para parar): ");
    scanf("%d", &numero);

    if (numero != 0) { 
        min = numero;
        max = numero;
        cont++;
    }

    while (numero != 0) {
        printf("Digite um numero (zero para parar): ");
        scanf("%d", &numero);

        if (numero != 0) { 
            if (numero > max) {
                max = numero;
            } else if (numero < min) {
                min = numero;
            }
            cont++;
        }
    }

    if (cont > 0) {
        printf("\nO maior numero digitado foi: %d\n", max);
        printf("O menor numero digitado foi: %d\n", min);
        printf("Quantidade de numeros digitados: %d\n", cont);
    } else {
        printf("\nNenhum numero valido foi digitado.\n");
    }

    return 0;
}
