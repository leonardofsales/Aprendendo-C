// Imprime todos os números não divisíveis por d e para quando encontra um divisível por 1000

#include <stdio.h>

int main()
{
    int i,n,d;
    printf("Número: "); scanf("%d", &n);
    printf("Divisor a ignorar: "); scanf(" %d", &d);
    for(i=n; ;i++) // laço infinito
    {
        if (i%1000==0)
            break; // Quebra o laço e o programa
        else
            if(i%d==0)
                continue; // Pula as instruções do laço, mas continua no laço
        printf("%d\n",i);
    }
}