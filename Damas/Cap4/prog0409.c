#include <stdio.h>

int main()
{
    char opcao;
    do
    {
        printf("\tM E N U  P R I N C I P A L\n");
        printf("\n\n\tClientes");
        printf("\n\n\tFornecedores");
        printf("\n\n\tEncomendas");
        printf("\n\n\tSair");
        printf("\n\n\n\t\tOpcão:");
        scanf(" %c", &opcao);
        fflush(stdin);
        switch(opcao)
        {
            case 'c':
            case 'C': puts("Opcão CLIENTES"); break;
            case 'f':
            case 'F': puts("Opcão FORNECEDORES"); break;
            case 'e':
            case 'E': puts("Opção ENCOMENDAS"); break;
            case 's':
            case 'S': break;
            default: puts("Opcão inválida!!!");
        }
    getchar();
    }
    while (opcao != 's' && opcao !='S');
}