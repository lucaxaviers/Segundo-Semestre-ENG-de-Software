#include <stdio.h>

int main() {
    int N, i;
    float X[20], Y[20], Z[20];

    printf("Digite os numeros dos vetores");
    scanf("%d", &N);

    for(i = 0; i < N; i++) scanf("%f", &X[i]);
    for(i = 0; i < N; i++) scanf("%f", &Y[i]);

    for(i = 0; i < N; i++) Z[i] = X[i] * Y[i];

    printf("X:\n");
    for(i = 0; i < N; i++) printf("%f ", X[i]);
    printf("\n");

    printf("Y:\n");
    for(i = 0; i < N; i++) printf("%f ", Y[i]);
    printf("\n");

    printf("Z:\n");
    for(i = 0; i < N; i++) printf("%f ", Z[i]);
    printf("\n");

    return 0;
}
