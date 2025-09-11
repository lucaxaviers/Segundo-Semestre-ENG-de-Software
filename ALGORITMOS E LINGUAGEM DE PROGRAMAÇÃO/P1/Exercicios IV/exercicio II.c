#include <stdio.h>

int main() {
    int n, i;
    int x[20], menor, maior;

    printf("digite o tamanho do vetor até 20: ");
    scanf("%d", &n);

    printf("Digite %d numeros:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    menor = x[0];
    maior = x[0];

    for (i = 1; i < n; i++) {
        if (x[i] < menor) menor = x[i];
        if (x[i] > maior) maior = x[i];
    }
    
    for (i = 0; i < n; i++) {
        printf("%d \n", x[i]);
    }

    printf("menor valor: %d", menor);
    printf("\nmaior valor: %d", maior);

    return 0;
}
