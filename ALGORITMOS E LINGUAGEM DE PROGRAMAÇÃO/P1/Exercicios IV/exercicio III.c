#include <stdio.h>

int main() {
    int N, i;
    int X[20];
    int menor, maior;
    int posMenor, posMaior;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &N);
    if (N > 20) N = 20;

    printf("Digite %d numeros inteiros:\n", N);
    for (i = 0; i < N; i++) {
        printf("X[%d] = ", i);
        scanf("%d", &X[i]);
    }

    menor = maior = X[0];
    posMenor = posMaior = 0;

    for (i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            posMenor = i;
        }
        if (X[i] > maior) {
            maior = X[i];
            posMaior = i;
        }
    }

    printf("Elementos do vetor:\n");
    for (i = 0; i < N; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }

    printf("\nMenor valor encontrado: X[%d] = %d\n", posMenor, menor);
    printf("Maior valor encontrado: X[%d] = %d\n", posMaior, maior);

    return 0;
}