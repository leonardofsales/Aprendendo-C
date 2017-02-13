#include <stdio.h>

int main()
{
    char PAUSA;
    
    int A, B, R;
    
    printf("Entre o valor de A: ");
    scanf("%d", &A);
    while((getchar() != '\n') && (!EOF));

    printf("Entre o valor de B: ");
    scanf("%d", &B);
    while((getchar() != '\n') && (!EOF));
    
    R = A+B;
    
    if (R >= 10)
    printf("Resultado: %-d\n", R+5);
    else
    printf("Resultado: %-d\n", R-7);
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}
