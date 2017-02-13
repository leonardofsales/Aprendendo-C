#include <stdio.h>

int main()
{
    char PAUSA;
    
    int A,B,R;
    
    printf("Entre um valor <A>: ");
    scanf("%d", &A);
    while((getchar() != '\n') && (!EOF));
    
    printf("Entre um valor <B>: ");
    scanf("%d", &B);
    while((getchar() != '\n') && (!EOF));
    
    R = (A>B) ? A : B;
    
    printf("\nO maior valor informado é: %-d.\n", R);
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}