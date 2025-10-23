#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n, int i) {
    if (n <= 1) return false;
    if (i == 1) return true;
    if (n % i == 0) return false;
    return ehPrimo(n, i - 1);
}

void pegaPrimos(int n, int vetor[], int *tamanho) {
    if (n == 0) return; 

    pegaPrimos(n - 1, vetor, tamanho);

    if (ehPrimo(n, n  - 1)) {
        vetor[*tamanho] = n;
        (*tamanho)++;
    }
}

int main() {
    int N;
    printf("Digite um número N: ");
    scanf("%d", &N);

    int vetor[N];  
    int tamanho = 0;

    pegaPrimos(N, vetor, &tamanho);

    printf("Números primos até %d: ", N);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
