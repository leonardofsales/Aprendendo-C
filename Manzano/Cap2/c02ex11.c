// Faz divisão entre inteiros com resto

#include <stdio.h>

int main()
{
    char PAUSA;
    
    int QUOCIENTE,DIVIDENDO,DIVISOR,RESTO;
    
    printf("Entre um valor do dividendo...: ");
    scanf("%i", &DIVIDENDO);
    while ((getchar() != '\n') && (!EOF));
    
    printf("Entre o valor do divisor...: ");
    scanf("%i", &DIVISOR);
    while ((getchar() != '\n') && (!EOF));
    
    QUOCIENTE=DIVIDENDO/DIVISOR;
    RESTO=DIVIDENDO%DIVISOR;
    
    printf("Quociente = %8i\n", QUOCIENTE);
    printf("Resto     = %8i\n", RESTO);
    
    printf("\n");
    printf("Pressione <Enter> para encerrar.... ");
    PAUSA = getchar();
    
    return 0;
}