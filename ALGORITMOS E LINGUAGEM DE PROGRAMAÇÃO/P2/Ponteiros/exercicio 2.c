#include <stdio.h>

int main()
{

    int num1 = 5 , num2 = 4, soma;
    int *pt1, *pt2;
    
    pt1 = &num1;
    pt2 = &num2;
    
    soma = *pt1 + *pt2;
    
    pt1 = &soma;
    
    pt1 =+ 10;
    
    printf("Valores das variáveis:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("soma = %d\n", soma);

    printf("\nValores guardados pelos ponteiros:\n");
    printf("*pt1 = %d\n", *pt1);
    printf("*pt2 = %d\n", *pt2);

    return 0;
}
