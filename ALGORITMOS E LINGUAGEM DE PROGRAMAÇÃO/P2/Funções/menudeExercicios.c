#include <stdio.h>
#include <string.h>
#include <ctype.h>


int Ex1_VerificaPar(int num){
    
    return (num % 2 == 0);
}

double Ex2_ParteFracionaria(double num){
    
    int parteinteira = (int)num;
    double partefracionada = num - parteinteira;
    return partefracionada;
}

int Ex3_Fatorial(int num){
    
    int fatorial = 1;  
    for(int i = 1; i <= num; i++) {
        fatorial *= i; 
    }
    return fatorial;
}

void Ex4_ParesEntreA_B(int a, int b){
    
   if (a > b) {
        int temp;
        temp = b;
        b = a;
        a = temp;
    }
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

int Ex5_TamanhoString(char string[]){
    
    int cont = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        cont++;
    }
    return cont;
}

int Ex6_QtdCaracter(char letra, char palavra[]){
    
    int cont = 0;
    int tamanho = strlen(palavra);
    
    for( int i = 0; i < tamanho; i++){
        if(palavra[i] == letra){
            cont++;
        }
    }
    return cont;
}

void EscolherExercicio() {
    int opcao;

    printf("===============================================================\n");
    printf("Escolha o exercicio que deseja rodar:\n\n");
    printf("1  - Retorna se inteiro eh par.\n");
    printf("2  - Le um numero real e retorna a parte fracionaria.\n");
    printf("3  - Retorna o fatorial de um inteiro positivo.\n");
    printf("4  - Escreve pares entre a e b.\n");
    printf("5  - Retorna tamanho de string.\n");
    printf("6  - Retorna a qtd de vezes que um caractere aparece na string.\n");
    printf("7  - Copia uma string para outra.\n");
    printf("8  - Retorna se string eh um palindromo.\n");
    printf("9  - Converte todos os caracteres de uma string para maiusculos.\n");
    printf("10 - Imprime vetor.\n");
    printf("11 - Faz swap entre dois inteiros.\n");
    printf("12 - Ordenacao crescente de vetor.\n");
    printf("13 - Separa elementos de um vetor em pares e impares.\n");
    printf("14 - Imprime uma matriz.\n");
    printf("15 - Multiplicacao de matrizes.\n");
    printf("===============================================================\n");
    printf("Digite sua opcao: ");
    scanf(" %d", &opcao);

    switch (opcao) {
        
        case 1:  {
            int n;
            printf("Digite um numero: ");
            scanf(" %d", &n);
            
            if(Ex1_VerificaPar(n)){
                printf("Eh Par");
            }
            else{
                printf("É Impar");
            }
            
            break;
        }
        
        case 2: {
            double numero, fracionada;
            
            printf("Digite um numero real: ");
            scanf(" %lf", &numero);
            
            fracionada = Ex2_ParteFracionaria(numero);
            
            printf("Numero Inteiro: %lf \n", numero);
            printf("Parte fracionada: %lf \n", fracionada);
            
            break;
        }
        
        case 3: {
            int num, fatorial;
            
            printf("Digite um numero: ");
            scanf(" %d", &num);
            
            if(num < 0) {
                printf("Fatorial nao definido para numeros negativos.\n");
            } 
            else {
            fatorial = Ex3_Fatorial(num);
            printf("Fatorial de %d = %d\n", num, fatorial);
            }
            
            break;
        }
        
        case 4: {
            int a, b;
            
            printf("Digite o valor de A: \n");
            scanf(" %d", &a);
            
            printf("Digite o valor de B: ");
            scanf(" %d", &b);
            
            printf("Os numero pares entre A & B: ");
            Ex4_ParesEntreA_B(a , b);
            
            break;
        }
        
        case 5: {
            char string[50];
            
            printf("Digite algo: ");
            scanf(" %[^\n]", string);
        
            int tamanho = Ex5_TamanhoString(string);
            printf("O tamanho é: %d\n", tamanho);
            
            break;
        }
        
        case 6: {
            char letra, palavra[50];
            
            printf("Digite uma palavra: ");
            scanf(" %[^\n]", palavra);
            
            printf("Digite uma letra: ");
            scanf(" %c", &letra);
            
            int contador = Ex6_QtdCaracter(letra, palavra);
            
            printf("A letra '%c' aparece %dx na palavra: %s\n", letra, contador, palavra);

            break;
        }
        
        case 7: {
            
        }
    }
}

int main() {
    EscolherExercicio();
    return 0;
}
