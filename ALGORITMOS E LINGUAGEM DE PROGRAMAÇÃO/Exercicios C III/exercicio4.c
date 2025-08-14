#include <stdio.h>

int main() {
    int senhaCorreta = 1234;
    int senhaDigitada;
    int tentativa = 1;

    while (tentativa <= 3) {
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCorreta) {
            printf("Acesso liberado\n");
            return 0;
        } else {
            printf("Acesso negado\n");
        }
        tentativa++;
    }

    printf("Limite máximo de tentativas excedido. Usuário bloqueado!\n");
    return 0;
}
