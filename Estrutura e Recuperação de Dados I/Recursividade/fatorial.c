#include <stdio.h>

int fatorial( int n){
    if( n == 1){ 
        return 1;
    }else{
    return n *= fatorial(n - 1);
    }
}

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf(" %d", &numero);
    printf("O fatorial de %d é %d", numero, fatorial(numero));

    return 0;
}
