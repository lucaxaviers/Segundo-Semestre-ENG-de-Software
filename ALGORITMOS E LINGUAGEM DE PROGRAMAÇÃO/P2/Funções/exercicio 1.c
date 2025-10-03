#include <stdio.h>
#include <stdbool.h>  

bool ParOuNao(int a){
    return (a % 2 == 0);
}

int main()
{
    int num;
    bool resultado;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    resultado = ParOuNao(num);
    
    if (resultado){
        printf("O numero digitado é PAR\n");
    }
    else{
        printf("O numero digitado é ÍMPAR\n");
    }
    
    return 0;
}
