#include <stdio.h>

int main(){
    
    int num1 = 1 , num2 = 2 , num3 = 3;
    int *p1, *p2, *p3;
    
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    
    *p1 = 10;     
    p1 = &num2;
    *p1 = 20;     
    p1 = &num3;
    *p1 = 30;     
    
    
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);
    printf(" Valor apontado por p1: %d\n", *p1);
    printf(" Valor apontado por p2: %d\n", *p2);
    printf(" Valor apontado por p3: %d\n", *p3);
    
    return 0;
}
