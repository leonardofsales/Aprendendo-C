#include <stdio.h>

int main()
{
    char PAUSA;
    
    int N, I, R;
    
    printf("Entre um valor para tabuada: ");
    scanf("%i", &N);
    while((getchar() != '\n') && (!EOF));
    
    printf("\n");
    
    I=1;
    while (I <= 10)
    {
        R = N * I;
        printf("%2i x %2i = %3i\n", N, I, R);
        I = I+1;
    }
    printf("\n");
    printf("Tecle <Enter> para terminar...");
    PAUSA = getchar();
    
    return 0;
}