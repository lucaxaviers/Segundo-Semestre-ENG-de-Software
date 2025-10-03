void SeparaParImpar(int sz, int vec[sz], int vPard[], int vImpar[], int *szPar, int *szImpar){
    
    *szPar = 0;
    *szImpar = 0;
    
    for( int i = 0; i < sz; i++){
        if(vec[i] % 2 == 0){
            vPard[*szPar] = vec[i];
            (*szPar)++;
        }
        else {
            vImpar[*szImpar] = vec[i];
            (*szImpar)++;
        }
    }
}

#include <stdio.h>

int main()
{
    int tamanho, contPar, contImpar;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho], pares[tamanho], impar[tamanho];
    printf("Digite o vetor: ");
    
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    
    SeparaParImpar(tamanho, vetor, pares, impar, &contPar, &contImpar);
    
    printf("Pares: ");
    for(int i = 0; i < contPar; i++){
        printf("%d ", pares[i]);
    }
    
    printf("\n");
    
    printf("Impares: ");
    for(int i = 0; i < contImpar; i++){
        printf("%d ", impar[i]);
    }
    
    return 0;
}
