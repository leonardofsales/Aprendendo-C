#include <stdio.h>

int main()
{
    char PAUSA;
    
    int VALOR;
    
    printf("Entre um valor inteiro positivo: ");
    scanf("%i", &VALOR);
    while((getchar() != '\n') && (!EOF));
    
    if (!(VALOR >=0))
        printf("Valor inválido\n");
    else
        printf("Valor válido, você informou %d\n", VALOR);
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}