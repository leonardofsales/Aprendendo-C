//Exercício: imprime toda a tabela ASCII com seus valores correspondentes

#include <stdio.h>

int main()
{
    int i;
    for (int i=0; i<255; i++)
    {
        printf("%3d -> %c\n", i,(char)i);
    }
}