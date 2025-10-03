#include <stdio.h>

void Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int numA = 5, numB = 10;
    
    Swap(&numA, &numB);
    
    printf("Depois do swap: x = %d, y = %d\n", numA, numB);


    return 0;
}
