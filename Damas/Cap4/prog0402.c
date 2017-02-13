// Faz contagem regressiva de 10 a 1

#include <stdio.h>

int main ()
{
    int n;
    n = 10;
    while (n)
        {
            printf("%d\n", n);
            n = n - 1;
        }
}