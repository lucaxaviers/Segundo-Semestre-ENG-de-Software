#include <stdio.h>

void intervaloPar(int num1, int num2) {
    
    if (num1 > num2) {
        
        int temp;
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int a, b;
    printf(" Digite o valor de A: ");
    scanf(" %d", &a);
    
    printf(" Digite o valor de B: ");
    scanf(" %d", &b); 
    
    printf(" Os numero pares do intervalo: ");
    intervaloPar(a ,b);

    return 0;
}
