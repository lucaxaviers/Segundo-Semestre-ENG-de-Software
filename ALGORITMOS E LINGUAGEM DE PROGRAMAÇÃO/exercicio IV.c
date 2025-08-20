#include <stdio.h>

int main() {
    int N, i;
    int X[20], Y[20];

    printf("Digite a quantidade de elementos (maximo 20): ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Digite numeros inteiros(%d/%d):\n",i,n);
        scanf("%d", &X[i]);
    }

    for (i = 0; i < N; i++) {
        Y[i] = X[N - 1 - i];
    }
   
    printf("\nVetor X:\n");
    for (i = 0; i < N; i++) {
        printf("%d \n",X[i]);
    }

    printf("\nVetor Y:\n");
    for (i = 0; i < N; i++) {
        printf("%d \n",Y[i]);
    }

    return 0;
}
