#include <stdio.h>

struct Funcionario{
    
  int id;
  char nome[50];
  float salario;
  int idade;
    
};

int qntd = 0;
struct Funcionario func[100];

void cadastro(){
 
    if( qntd >= 100){
        printf("Limite atingido");
        return;
    }
    
        printf("Digite o ID: ");
        scanf("%d", &func[qntd].id);
    
        printf("Nome: ");
        scanf(" %[^\n]", func[qntd].nome);
        
        printf("Digite o salário: ");
        scanf("%f", &func[qntd].salario);
        
        printf("Digite a idade: ");
        scanf("%d", &func[qntd].idade);
        
        qntd++;
    }

void mostrarFuncionarios(){
    
    for(int i = 0; i < qntd; i++){
        printf("ID: %d ,Nome: %s , Salário: %2.f, Idade: %d \n", func[i].id, func[i].nome, func[i].salario, func[i].idade);
    }
    
}

void aumentarSalario(int id, float perc){
    
    for( int i = 0; i < qntd; i++){
        if(func[i].id == id){
            func[i].salario += func[i].salario * (perc/100);
        }
    }
}

void filtrarSalario(float salario){

    for(int i = 0; i < qntd; i++){
        if(func[i].salario > salario){
            printf("ID: %d ,Nome: %s , Salário: %2.f, Idade: %d \n", func[i].id, func[i].nome, func[i].salario, func[i].idade);
        }
    }
}

void calcularMedia(){
    float soma = 0, media;
    if(qntd == 0){
    printf("Nenhum funcionário cadastrado.\n");
    return;
}
    for(int i = 0; i < qntd;i++){
        soma += func[i].salario;
    }
    media = soma/qntd;
    printf("A média salarial é: %.2f \n", media);
}

int main()
{
    int opcao;
    
    do{
        
        printf("ESCOLHA UMA OPÇÃO DO MENU:");
        printf("\n1 - Cadastro: \n");
        printf("2 - Exibir: \n");
        printf("3 - Aumentar Salário: \n");
        printf("4 - Filtrar por salario: \n");
        printf("5 - Média Salarial: \n");
        printf("6 - Sair: \n");
        scanf("%d", &opcao);
    
        switch (opcao){
        
            case 1: {
                cadastro();
                break;
            }
            
            case 2: {
                mostrarFuncionarios();
                break;
            }
            
            case 3: {
                
                int id;
                float perc;
                
                printf("Digite o ID para o aumento: ");
                scanf("%d", &id);
                printf("Digite a o percentual de aumento: ");
                scanf(" %f", &perc);
                
                aumentarSalario(id,perc);
                break;
            }
            
            case 4: {
                
                float filtro;
                printf("Filtre por salario maior que: ");
                scanf("%f", &filtro);
                
                filtrarSalario(filtro);
                break;
            }
            
            case 5: {
                    calcularMedia();
                    break;
            }
        }   
    }   while(opcao!=6);
    
    return 0;
}