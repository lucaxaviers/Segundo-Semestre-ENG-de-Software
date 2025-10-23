#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente {
    char nome[20];
    long cpf;
    struct Cliente *prox;
};

// Função para cadastrar um cliente (insere no início da lista)
struct Cliente* cadastrar(struct Cliente *lista, char nome[], long cpf) {
    struct Cliente *novo = malloc(sizeof(struct Cliente));

    strcpy(novo->nome, nome);
    novo->cpf = cpf;
    novo->prox = lista; // novo aponta para o antigo primeiro
    return novo; // novo agora é o primeiro da lista
}

// Função para exibir todos os clientes
void exibir(struct Cliente *lista) {
    struct Cliente *atual = lista;
    if (atual == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    printf("\n--- Clientes cadastrados ---\n");
    while (atual != NULL) {
        printf("Nome: %s | CPF: %ld\n", atual->nome, atual->cpf);
        atual = atual->prox;
    }
}

// Função para buscar cliente pelo CPF
void buscarCPF(struct Cliente *lista, long cpf) {
    struct Cliente *atual = lista;
    while (atual != NULL) {
        if (atual->cpf == cpf) {
            printf("Cliente encontrado: %s (CPF: %ld)\n", atual->nome, atual->cpf);
            return;
        }
        atual = atual->prox;
    }
    printf("CPF nao encontrado!\n");
}

// Função para excluir cliente pelo CPF
struct Cliente* excluir(struct Cliente *lista, long cpf) {
    struct Cliente *atual = lista;
    struct Cliente *anterior = NULL;

    while (atual != NULL && atual->cpf != cpf) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("CPF nao encontrado!\n");
        return lista;
    }

    if (anterior == NULL) { // remover o primeiro
        lista = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Cliente removido com sucesso!\n");
    return lista;
}

int main() {
    struct Cliente *lista = NULL;
    int opcao;
    char nome[20];
    long cpf;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Exibir todos\n");
        printf("3 - Buscar por CPF\n");
        printf("4 - Excluir por CPF\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome: ");
                scanf(" %[^\n]", nome);
                printf("CPF: ");
                scanf("%ld", &cpf);
                lista = cadastrar(lista, nome, cpf);
                break;

            case 2:
                exibir(lista);
                break;

            case 3:
                printf("Digite o CPF a buscar: ");
                scanf("%ld", &cpf);
                buscarCPF(lista, cpf);
                break;

            case 4:
                printf("Digite o CPF a excluir: ");
                scanf("%ld", &cpf);
                lista = excluir(lista, cpf);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    // Libera memória antes de sair
    struct Cliente *temp;
    while (lista != NULL) {
        temp = lista;
        lista = lista->prox;
        free(temp);
    }

    return 0;
}
