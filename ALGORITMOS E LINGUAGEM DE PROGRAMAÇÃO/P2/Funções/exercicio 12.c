#include <stdio.h>

// Função para trocar dois inteiros
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função que ordena em ordem crescente usando Bubble Sort
void OrdenarCrescente(int sz, int vec[sz]) {
    for (int i = 0; i < sz - 1; i++) {
        for (int j = 0; j < sz - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                Swap(&vec[j], &vec[j + 1]);
            }
        }
    }
}

int main() {
    int sz;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &sz);
    
    int vetor[sz];
    printf("Digite o vetor:\n");
    
    for(int i = 0; i < sz; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original:\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    OrdenarCrescente(sz, vetor);

    printf("Vetor em ordem crescente:\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
