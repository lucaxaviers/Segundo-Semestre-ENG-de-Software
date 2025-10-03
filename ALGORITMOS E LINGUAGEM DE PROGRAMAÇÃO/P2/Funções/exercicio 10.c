#include <stdio.h>
void printVetor(int sz, int vec[sz])
{
    for(int i = 0; i < sz; i++){
        printf("%d \n", vec[i]);
    }
}

int main()
{
    int sz;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&sz);
    
    int vetor[sz];
    printf("Digite o vetor: ");
    
    for(int i = 0; i < sz; i++){
        scanf(" %d", &vetor[i]);
    }
    
    printVetor(sz, vetor);

    return 0;
}
