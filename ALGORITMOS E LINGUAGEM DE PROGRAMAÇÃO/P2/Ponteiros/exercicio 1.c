#include <stdio.h>

int main()
{
    int  var1, var2, temp;
    int *p1, *p2;
    
    var1 = 1;
    var2 = 2;
    
    p1 = &var1;
    p2 = &var2;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("Variaveis: \n");
    printf("var1:%d \n", var1);
    printf("var2:%d", var2);
    printf("\n");

    printf("Ponteiros: \n");
    printf("p1:%d \n", *p1);
    printf("p2:%d", *p2);
    

    return 0;
}
