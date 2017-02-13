// Calcula se três valores inseridos formam um triângulo e que tipo de triângulo formam

#include <stdio.h>

int main()
{
    char PAUSA;
    
    float A,B,C;
    
    printf("Informa o tamanho do lado A: ");
    scanf("%f", &A);
    while((getchar() != '\n') && (!EOF));
    
    printf("Informa o tamanho do lado B: ");
    scanf("%f", &B);
    while((getchar() != '\n') && (!EOF));
    
    printf("Informa o tamanho do lado C: ");
    scanf("%f", &C);
    while((getchar() != '\n') && (!EOF));
    
    if (A<B+C && B<A+C & C<A+B)
        if (A==B && B==C)
            printf("\nTriângulo esquilátero\n");
        else
            if (A==B || A==C || C==B)
                printf("\nTriângulo isósceles\n");
            else
                printf("\nTriângulo escaleno\n");
    else
        printf("\nOs valores fornecidos não formam um triângulo\n");
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}