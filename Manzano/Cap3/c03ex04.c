#include <stdio.h>

int main()
{
    char PAUSA;
    
    int NUMERO;
    printf("\nEntre um valor: ");
    scanf("%d", &NUMERO);
    while((getchar() != '\n') && (!EOF));
    
    if (NUMERO >= 20 && NUMERO <=90)
        printf("O valor está entre 20 e 90\n");
    else
        printf("O valor não está entre 20 e 90\n");
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}