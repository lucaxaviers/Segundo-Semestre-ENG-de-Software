Perfeito 👍 Aqui está o mesmo código, sem comentários:

⸻


#include <stdio.h>

int validarPrimo(int numero, int divisor) {
    if (divisor == 1) {
        return 1;
    }
    if (numero % divisor == 0) {
        return 0;
    }
    return validarPrimo(numero, divisor - 1);
}

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    return validarPrimo(numero, numero - 1);
}

void pegaPrimos(int n, int vetor[], int *tamanho) {
    if (n == 0) return;
    pegaPrimos(n - 1, vetor, tamanho);
    if (ehPrimo(n)) {
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