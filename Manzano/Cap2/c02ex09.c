// Converte números de ponto flutuante en exponencial

#include <stdio.h>

int main()
{
    char PAUSA;
    float NFS = 0.0F;
    double NFD = 0.0;
    float NPF = 0.0F;
    
    printf("Informe um valor de ponto flutuante simples: ");
    scanf("%f", &NFS);
    while ((getchar() != '\n') && (!EOF));
    printf("O valor %.20f é igual a %e em exponencial.\n", NFS, NFS);
    printf("O valor %.20f é igual a %E em exponencial.\n", NFS, NFS);

    printf("\n");
    printf("Informe um valor de ponto flutuante duplo: ");
    scanf("%lf", &NFD);
    while ((getchar() != '\n') && (!EOF));
    printf("O valor %.20f é igual a %e em exponencial.\n", NFD, NFD);
    printf("O valor %.20f é igual a %E em exponencial.\n", NFD, NFD);
    
    printf("\n");
    printf("Informe um valor em exponencial: ");
    scanf("%e", &NPF);
    while ((getchar() != '\n') && (!EOF));
    printf("O valor %e é igual a %lf em ponto flutuante.\n", NPF, NPF);
    
    printf("\n");
    printf("Pressione <Enter> para encerrar.... ");
    PAUSA = getchar();
    
    return 0;
}