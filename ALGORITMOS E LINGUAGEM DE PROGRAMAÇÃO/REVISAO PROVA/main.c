#include <stdio.h>

struct Alunos {
    char nome[50];
    float p1;
    float p2;
    float p3;
    float media;
};

struct Alunos alunos[100];
int qntd = 0;

void calcularMedia(struct Alunos *aluno) {
    aluno->media = (aluno->p1 + aluno->p2 + aluno->p3) / 3.0f;
}

void cadastrarAlunos() {
    if (qntd >= 100) {
        printf("Limite atingido\n");
        return;
    }

    printf("Digite o nome: ");
    scanf(" %[^\n]", alunos[qntd].nome);

    printf("Nota da P1: ");
    scanf("%f", &alunos[qntd].p1);

    printf("Nota da P2: ");
    scanf("%f", &alunos[qntd].p2);

    printf("Nota da P3: ");
    scanf("%f", &alunos[qntd].p3);

    // Chama a função para calcular a média
    calcularMedia(&alunos[qntd]);

    qntd++;
}

void mostrarTodos(){
    printf("\nLista de todos os alunos:\n");
    for (int i = 0; i < qntd; i++) {
        printf("Nome: %s, Média: %.2f\n", alunos[i].nome, alunos[i].media);
    }
}

void mostrarAprovados() {
    printf("\nAlunos Aprovados:\n");
    for (int i = 0; i < qntd; i++) {
        if (alunos[i].media >= 6.0f) {
            printf("%s - Média: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}

void mostrarReprovados() {
    printf("\nAlunos Reprovados:\n");
    for (int i = 0; i < qntd; i++) {
        if (alunos[i].media < 6.0f) {
            printf("%s - Média: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}

int main() {
    int opcao;
    do {
        printf("\n== MENU ==\n");
        printf("1 - Cadastrar Aluno\n");
        printf("2 - Mostrar Aprovados\n");
        printf("3 - Mostrar Reprovados\n");
        printf("4 - Mostrar Todos\n");
        printf("5 - Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            cadastrarAlunos();
            break;
        case 2:
            mostrarAprovados();
            break;
        case 3:
            mostrarReprovados();
            break;
            
        case 4:
            mostrarTodos();
            break;
            
        case 5:
            printf("Saindo...\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}
