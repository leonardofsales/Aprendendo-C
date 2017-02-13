#include <stdio.h>

int main()
{
    char PAUSA;
    
    int N, I, R;
    
    printf("Entre o valor da tabuada: ");
    scanf("%i", &N);
    while((getchar() != '\n') && (!EOF));
    printf("\n");
    
    I = 1;
    
    loop:
        R = N * I;
        printf("%2i x %2i = %3i\n", N, I, R);
        if (I > 9) goto endloop;
        ++I;
        goto loop;
    endloop:

    printf("\n");
    printf("Pressione <Enter> para encerrar...");
    PAUSA = getchar();
}