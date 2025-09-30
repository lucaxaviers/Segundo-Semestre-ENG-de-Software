#include <stdio.h>

int Soma(int a, int *b)
{
    return (a + *b);
}

int main() {
    int num1 = 3, num2 = 4;
    int s = Soma(num1, &num2);  
    printf("soma = %d\n", s);

    return 0;
}
