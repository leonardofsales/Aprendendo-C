#include <stdio.h>

int linha3x()
{
    int i;
    for (i=1; i<=3; i++)
        putchar('*');
    putchar('\n');
}

int linha5x()
{
    int i;
    for (i=1; i<=5; i++)
        putchar('*');
    putchar('\n');
}

int linha7x()
{
    int i;
    for (i=1; i<=7; i++)
        putchar('*');
    putchar('\n');
}

int main()
{
    linha3x();
    linha5x();
    linha7x();
    linha5x();
    linha3x();
}