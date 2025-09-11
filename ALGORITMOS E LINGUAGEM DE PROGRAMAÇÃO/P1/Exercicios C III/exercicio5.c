#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);
    printf("Digite o 3º número: ");
    scanf("%d", &num3);
    printf("Digite o 4º número: ");
    scanf("%d", &num4);
    printf("Digite o 5º número: ");
    scanf("%d", &num5);

    int temp;
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; }
    if (num3 > num4) { temp = num3; num3 = num4; num4 = temp; }
    if (num4 > num5) { temp = num4; num4 = num5; num5 = temp; }
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; }
    if (num3 > num4) { temp = num3; num3 = num4; num4 = temp; }
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; }
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }

    printf("\nNúmeros em ordem crescente: %d %d %d %d %d\n", num1, num2, num3, num4, num5);

    return 0;
}
