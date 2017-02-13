#include <stdio.h>

int main()
{
    char PAUSA;
    
    int N, I, R;
    
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
    printf("Pressione <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}