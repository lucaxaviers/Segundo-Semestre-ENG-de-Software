#include <stdio.h>
int main() {
    int x;
    int horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &x);

    horas = x/ 3600;
    minutos = (x % 3600) / 60;
    segundos = x % 60;

    printf("Resultado: %d hora(s), %d   minuto(s), %d segundo(s)\n", horas,    minutos, segundos);

return 0;

}
