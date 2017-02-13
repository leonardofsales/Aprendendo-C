
#include <stdio.h>

int main()
{

    int N, I, R;

    char RESP = 'S';

    while (RESP == 'S' || RESP == 's')
    {
    printf("Entre um valor para a tabuada: ");
    scanf("%i", &N);
    while((getchar() != '\n') && (!EOF));
    printf("\n");

    I=1;
    while(I <= 10)
    {
    R= N*I;
    printf("%2d x %2d = %3d\n", N, I, R);
    I++;
    }
    printf("\n");
    printf("Deseja continuar? (S/N)\n");
    scanf("%c", &RESP);
    while((getchar() != '\n') && (!EOF));
    }

    return 0;
}
