//switch com má implementação de código sem o break

#include <stdio.h>

int main()
{
    char Est_Civil;
    printf("Qual é o estado civil? ");
    Est_Civil = getchar();
    switch(Est_Civil)
            {
                case 'C': printf("Casado\n");
                case 'S': printf("Solteiro\n");
                case 'D': printf("Divorciado\n");
                case 'V': printf("Viúvo\n");
                default : printf("Estado civil inválido\n");
            }
}