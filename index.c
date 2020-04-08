#include <stdio.h>

void Cadastro();
//Chamada de funções externas

struct VarG {
    int Op;

}; //Vaiáveis do tipo Global

FILE* DB; //Ponteiro do Banco de dados

struct VarG Global; // Definição da Struct

int main() { //Função Principal
    system("clear"); //Limpa a tela
    printf("=========================\n");
    printf(" GERENCIADOR DE CLIENTES\n");
    printf("=========================\n\n");

    printf("[1] - Cadastrar\n");
    printf("[2] - Alterar\n");
    printf("[3] - Listar\n");
    printf("[4] - Remover\n\n");

    printf("[5] - Encerrar\n");
    printf("===============\n");
    printf("Opção: ");
    scanf("%d", &Global.Op);

    switch (Global.Op)
    {
    case 1:
        Cadastro();
        break;
    
    case 2:
        printf("Função Alterar Iniciada...\n");
        break;

    case 3:
        printf("Função Listar Iniciada...\n");
        break;

    case 4:
        printf("Função Remover Iniciada...\n");
        break;

    case 5:
        printf("Fim da Execução...\n");
        break;
    
    default:
        printf("Valor inválido! Tente novamente...\n");
        main();
        break;
    }

    return 0;
} //Fim da Função Main

void Cadastro() {
    system("clear");
    DB = fopen("dados.txt", "a"); //Abertura do Banco de dados

    if(DB == NULL) {
        printf("\nErro no banco de dados...\n");
        return 1;

    } //Verificação do Banco de Dados

    

}
