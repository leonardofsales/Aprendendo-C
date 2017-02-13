// Imprime todas as tabudas de 1 a 5

#include <stdio.h>

int main ()
{
    int n, num;
    num = 1;
    while (num<=5)
        {
            n=1;
            while (n<=10)
                {
                    printf("%2d * %2d = %2d\n", num, n, num*n);
                     n = n + 1;
                }
            num = num + 1;
            putchar('\n');
        }
}