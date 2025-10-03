#include <stdio.h>

int calcfatorial(int num) {
    int fatorial = 1;  
    for(int i = 1; i <= num; i++) {
        fatorial *= i; 
    }
    return fatorial;
}

int main() {
    int num, fatorial;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        fatorial = calcfatorial(num);
        printf("Fatorial de %d = %d\n", num, fatorial);
    }

    return 0;
}
