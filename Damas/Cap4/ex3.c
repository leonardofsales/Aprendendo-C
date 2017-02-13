#include <stdio.h>

int main()
{
    int num,linhas;
    char letra;
    printf("Digite um número: "); scanf("%d", &num);
    printf("Digite um caractere: "); scanf(" %c", &letra);
    for (linhas = 1; linhas <= num; linhas++)
    {
        for(int i=1; i<=num; i++)
        {
                    printf("%c", letra);
        }
        printf("\n");
    }
}