#include <stdio.h>
#include <iso646.h>

int main()
{
    char PAUSA;
    
    int NUMERO;
    
    printf("Entre um valor: ");
    scanf("%d", &NUMERO);
    while((getchar() != '\n') && (!EOF));
    
    if (NUMERO >=0 and NUMERO <=9)
        printf("\nValor na faixa de 1-9\n");
    else
        printf("Valor fora da faixa de 1-9\n");
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}