#include <stdio.h>

int main()
{
    char PAUSA;
    
    int IDADE = 25;
    int *PIDADE = &IDADE;
    
    printf("O valor idade %i está armazenada no ", *PIDADE);
    printf("endereço de memória %p\n", PIDADE); // Provoca erro no C9
    
    printf("\n");
    printf("Tecle <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}