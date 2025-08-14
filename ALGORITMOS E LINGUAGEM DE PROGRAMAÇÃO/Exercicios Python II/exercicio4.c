#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Os valores formam um triângulo.\n");
    } else {
        printf("Os valores NÃO formam um triângulo.\n");
    }

    return 0;
}
