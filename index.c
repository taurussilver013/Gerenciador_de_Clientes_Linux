#include <stdio.h>

void Cadastro();
void Listar();
//Chamada de funções externas

struct VarG {
    int Op;
    char Cd;

}; //Variáveis do tipo Global

struct Cadastro {
    char Nome[25];
    char Email[35];
    char Cpf[15];

}; // Variáveis do tipo Cadastro.Pessoa

FILE* DB; //Ponteiro do Banco de dados

struct VarG Global;
struct Cadastro Pessoa; // Definição das Structs

int main() {
    system("clear"); //Limpa a tela (Linux)
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
    getchar(); //Limpa o Buffer

    switch (Global.Op) {
    case 1:
        Cadastro(); //Funcão Cadastro é iniciada
        break;
    
    case 2:
        printf("Função Alterar Iniciada...\n");
        break;

    case 3:
        Listar(); //Função Listar é iniciada
        break;

    case 4:
        printf("Função Remover Iniciada...\n");
        break;

    case 5:
        system("clear");
        printf("######################\n");
        printf("# Fim da Execução... #\n");
        printf("######################\n\n");
        break;
    
    default:
        printf("Valor inválido! Tente novamente...\n");
        sleep(1); //Pausa a tela por 1s (Linux)
        main();
        break;
    }

    return 0;
} //Fim da Função Principal

void Cadastro() {
    system("clear");
    DB = fopen("dados.txt", "a"); //Abertura do DB para a inserção de dados

    if(DB == NULL) {
        printf("\nErro no Banco de Dados...\n");
        return 1;

    } //Verificação do Banco de Dados

    printf("==========\n");
    printf(" CADASTRO\n");
    printf("==========\n");

    printf("\nDigite seu nome: ");
    fgets(Pessoa.Nome, 25, stdin); //Recebe a String Nome
    printf("\nDigite seu E-mail: ");
    fgets(Pessoa.Email, 35, stdin); //Recebe a String Email
    printf("\nDigite seu CPF: ");
    fgets(Pessoa.Cpf, 15, stdin); //Recebe a String Cpf

    system("clear");
    printf("\n=============================\n");
    printf("Finalizar cadastro? [s/n] : ");
    scanf("%c", &Global.Cd); //Conclusão do cadastro

    if(Global.Cd == 's') {
    fprintf(DB, "Nome: %sE-mail: %sCPF: %s", Pessoa.Nome, Pessoa.Email, Pessoa.Cpf);
    fprintf(DB, "----------------------\n"); //Salva os dados

    fclose(DB); //Fecha o Banco de dados

    system("clear");
    printf("######################\n");
    printf("# Cadastro Concluído #\n");
    printf("######################\n");

    sleep(1);
    main();

    } else if(Global.Cd == 'n') {
        system("clear");
        printf("Cadastro Cancelado.\nVoltando ao Menu Principal...\n");
        fclose(DB); //Fecha DB
        getchar(); //Corrige bug quando Global.Cd != 's' && 'n'        
        sleep(1);
        main();

    } else {
        printf("Valor inválido. Tente novamente...\n");
        fclose(DB); //Fecha DB
        sleep(1);
        Cadastro();

    }

} //Fim da função Cadastro

void Listar() {
    system("clear");
    DB = fopen("dados.txt", "r"); //Abertura do DB para leitura de dados

    if(DB == NULL) {
        printf("\nErro no Banco de Dados...\n");
        return 1;

    } //Verificação do Banco de Dados

    char listagem[100]; //String geral para os dados

    printf("======================\n");
    printf(" LISTAGEM DE CLIENTES\n");
    printf("======================\n\n");

    while(fgets(listagem, 1000, DB) != NULL) {
        printf("%s", listagem);

    } //Considera todos os dados como uma String e exibe na tela

    fclose(DB);

    printf("\nVoltar ao Menu Principal? [s/n]: ");
    scanf("%c", &Global.Cd);

    if(Global.Cd == 's') {
        main();

    } else if(Global.Cd != 's' && Global.Cd != 'n') {
        printf("Valor inválido.\nVoltando ao Menu Principal...\n");
        sleep(1);
        main();

    }

}