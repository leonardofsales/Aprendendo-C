#include <stdio.h>
#include <ctype.h>

int main()
{
    char PAUSA;
    
    int N, I, R;
    char RESP;

    do
    {    
        printf("Digite um número para tabuada: ");
        scanf("%i", &N);
        while((getchar() != '\n') && (!EOF));
        printf("\n");
        
        I = 1;
        do
        {
            R = N * I;
            printf("%2i x %2i = %3i\n", N, I, R);
            I++;
        }
        while(I <= 10);
        printf("\n");
        printf("Deseja continuar? (S/N)\n");
        scanf("%c", &RESP);
        while((getchar() != '\n') && (!EOF));
        printf("\n");
    }
    while(toupper(RESP) == 'S');
    
    printf("Pressione <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}