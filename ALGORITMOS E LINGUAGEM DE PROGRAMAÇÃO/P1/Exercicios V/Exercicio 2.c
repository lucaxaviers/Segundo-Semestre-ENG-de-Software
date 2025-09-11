#include <stdio.h>

int main()
{
    int i, j;
    int posMinL, posMinC, posMaxL, posMaxC;
    float matriz[5][5], maior, menor;

    printf("Digite a matriz:\n");

    scanf("%f", &matriz[0][0]);
    maior = menor = matriz[0][0];
    posMaxL = posMinL = 0;
    posMaxC = posMinC = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = (i == 0 ? 1 : 0); j < 5; j++)
        {
            scanf("%f", &matriz[i][j]);

            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                posMaxL = i;
                posMaxC = j;
            }
            if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                posMinL = i;
                posMinC = j;
            }
        }
    }

    printf("A matriz é:\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%6.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior: %.2f", maior);
    printf("\nPosição do maior: [%d], [%d]", posMaxL, posMaxC);

    printf("\n\nMenor: %.2f", menor);
    printf("\nPosição do menor: [%d], [%d]\n", posMinL, posMinC);

    return 0;
}
