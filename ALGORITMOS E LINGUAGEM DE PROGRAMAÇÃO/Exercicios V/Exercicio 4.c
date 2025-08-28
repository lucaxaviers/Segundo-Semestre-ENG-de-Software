#include <stdio.h>

int main() {
    float matriz[10][10];
    float soma = 0.0;
    float menor;
    float maior;
    int i, j;
    int linhaPos = 0, colPos = 0;

    printf("Digite os elementos da matriz: \n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(i == 4) {
                soma += matriz[i][j];
            }
        }
    }

    menor = matriz[0][5];
    for(i = 1; i < 10; i++) {
        if(matriz[i][5] < menor) {
            menor = matriz[i][5];
        }
    }

    maior = matriz[0][0];
    for(i = 1; i < 10; i++) {
        if(matriz[i][i] > maior) {
            maior = matriz[i][i];
            linhaPos = i;
            colPos = i;
        }
    }

    printf("\nSoma da linha 4: %.2f\n", soma);
    printf("Menor elemento da coluna 5: %.2f\n", menor);
    printf("Maior elemento da diagonal principal: %.2f na posição [%d][%d]\n", maior, linhaPos, colPos);

    return 0;
}
