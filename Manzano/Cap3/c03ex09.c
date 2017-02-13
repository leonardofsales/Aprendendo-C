#include <stdio.h>

int main()
{
    char PAUSA;
    
    float A,B,R;
    int OPCAO;
    
    printf("Entre um valor <A>: ");
    scanf("%f", &A);
    while((getchar() != '\n') && (!EOF));
    
    printf("Entre um valor <B>: ");
    scanf("%f", &B);
    while((getchar() != '\n') && (!EOF));
    
    printf("\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("\n");
    printf("Escolha uma opção: ");
    scanf("%i", &OPCAO);
    while((getchar() != '\n') && (!EOF));
    
    if (OPCAO == 1)
        R = A+B;
    if (OPCAO == 2)
        R = A-B;
    if (OPCAO == 3)
        R = A*B;
    if (OPCAO == 4)
        if (B == 0)
            R = 0;
        else
            R = A/B;
    
    if (OPCAO >=1 && OPCAO <=4)
        printf("\n O resultado da operação é: %-8.2f\n", R);
    else
        printf("\nOpção inválida\n");
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}