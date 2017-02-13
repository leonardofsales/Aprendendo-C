// Faz tabuada de qualquer número

#include <stdio.h>

int main ()
{
    int n, num;
    n = 1;
    printf("Qual número da tabuada? "); scanf("%d", &num);
    while (n<=10)
        {
            printf("%2d * %2d = %2d\n", num, n, num*n);
            n = n + 1;
        }
}