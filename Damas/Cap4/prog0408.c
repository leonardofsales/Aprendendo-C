#include <stdio.h>

int main()
{
    int i,j;
    for (i=1; i<=5; i=i+1)
    {
        for (j=1; j<=10; j=j+1)
        {
            printf("%2d * %2d = %2d\n",i,j,i*j);
            
            if (i!=5)
            {
                printf("Pressione a tecla Enter para continuar...");
                getchar();
            }
        }
    }
}