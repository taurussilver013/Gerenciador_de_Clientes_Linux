#include <stdio.h>

struct VarG {
    int Op;
}; //Vaiáveis do tipo Global

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
    printf("=========\n");
    printf("Opção: ");
    scanf("%d", &Global.Op);

    return 0;
}