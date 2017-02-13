#include <stdio.h>

int x_toupper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 'a' - 'A'; // ??????????????
    else
        return ch;
}

int main()
{
    char c;
    while(1)
    {
        c=getchar();
        putchar(x_toupper(c));
    }
}