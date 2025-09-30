#include <stdio.h>

int main()
{
    double num1 = 5.0, num2 = 3.0, multi;  
    double *pont1, *pont2;
    
    pont1 = &num1;
    pont2 = &num2;
    
    multi = (*pont1) * (*pont2);
    
    pont2 = &multi;
    
    *pont2 = *pont2 / 2;
    

    printf("Valor de num1: %f\n", num1);
    printf("Valor de num2: %f\n", num2);
    printf("Valor de multi: %f\n", multi);
    printf("Valor apontado por pont1: %f\n", *pont1);
    printf("Valor apontado por pont2: %f\n", *pont2);

    return 0;
}
