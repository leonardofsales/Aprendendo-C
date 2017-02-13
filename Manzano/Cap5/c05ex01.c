#include <stdio.h>

int main()
{
    char PAUSA;
    
    int IDADE = 25;
    int *PIDADE = 0;
    
    PIDADE = &IDADE;
    
    printf("O valor idade %i está armazenada no ", IDADE);
    printf("endereço de memória %x\n", PIDADE); // Provoca erro no C9
    
    printf("\n");
    printf("Tecle <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}