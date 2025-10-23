#include <stdio.h>

int validarPrimo(int numero, int divisor){
    if(divisor == 1){
        return 1;
    }
    if(numero % divisor == 0){
        return 0;
    }
    return validarPrimo(numero, divisor - 1);
}

int ehPrimo(int numero){
    if( numero <= 1){
        return 0;
    }
    return validarPrimo(numero, numero - 1);
}

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf(" %d", &numero);
    
    if(ehPrimo(numero)){
        printf("É primo");
    }
    else{
        printf("Não é primo");
    }
    
    return 0;
}
