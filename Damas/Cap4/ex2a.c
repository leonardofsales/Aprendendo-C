// Contagem ascendente de 1 a n, controle descendente de n a 1 (Tentativa 2 - código mais conciso com controle no laço for)

#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Digite um número: "); scanf("%d", &n);
    for (i=1, j=n; i<=n; i++, j--)
        printf("%d - %d\n", i,j);
}