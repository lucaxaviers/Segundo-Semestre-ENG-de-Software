#include <stdio.h>

int somarTudo( int n){
    if( n == 1){ 
        return 1;
    }else{
    return n += somarTudo(n - 1);
    }
}

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf(" %d", &numero);
    printf("A soma dos numeros até %d é %d", numero, somarTudo(numero));

    return 0;
}
