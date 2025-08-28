#include <stdio.h>

int main()
{
    int n, i, j;
    float matriz[20][20], soma = 0.0;
    
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d",&n);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f",&matriz[i][j]);
            if(i==j)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("A matriz é:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%6.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos elementos da diagonal principal é: %.2f\n", soma);
    
    return 0;
}
