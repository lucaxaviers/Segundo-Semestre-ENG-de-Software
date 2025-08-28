#include <stdio.h>

int main()
{
    int matriz[5][3], transposta[3][5];
    
    printf("Digite a matriz:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }
    
    printf("\nMatriz original:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTransposta:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%4d ", transposta[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
