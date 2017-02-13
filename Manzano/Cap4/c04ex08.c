#include <stdio.h>

int main()
{
    char PAUSA;
    
    int N, I = 1;
    long int FAT = 1;
    
    printf("Programa fatorial\n\n");
    printf("Fatorial de que valor? ");
    scanf("%d", &N);
    while((getchar() != '\n') && (!EOF));
    printf("\n");

    do
    {    
        FAT *= I;
        I++;
    }
    while(I <= N);
    
    printf("\nFatorial de %-d = %-ld.\n", N, FAT);
    
    printf("\n");
    printf("Pressione <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}