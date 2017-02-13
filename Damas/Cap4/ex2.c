// Contagem ascendente de 1 a n, controle descendente de n a 1 (Tentativa 1)

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número: "); scanf("%d", &num);
    int controle=num;
    for (int n=1; n<=num; n++)
    {
        printf("%d - %d\n", n, controle--);
    }
}