// Calcula a área de um cilindro

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main()
{
    char PAUSA;
    
    float V,H,R;
    
    printf("Entre a altura do cilindro: ");
    scanf("%f", &H);
    while ((getchar() != '\n') && (!EOF));
    
    
    printf("Entre o raio do cilindro: ");
    scanf("%f", &R);
    while ((getchar() != '\n') && (!EOF));
    
    V = H * PI * pow(R,2);
    
    printf("Área do cilindro: %f\n", V);
    
    printf("\n");
    printf("Pressione <Enter> para encerrar.... ");
    PAUSA = getchar();
    
    return 0;
}