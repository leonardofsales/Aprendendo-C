// Apresenta tamanhos dos tipos de variáveis e ponteiros

#include <stdio.h>

int main()
{
    char PAUSA;
    
    char        C, *PC;
    int         I, *PI;
    short       S, *PS;
    float       F, *PF;
    double      D, *PD;
    long double L, *PL;
    
    printf("Tamanho 'char'.............: %2i bytes.\n", sizeof(C));
    printf("Tamanho 'int'..............: %2i bytes.\n", sizeof(I));
    printf("Tamanho 'short'............: %2i bytes.\n", sizeof(S));
    printf("Tamanho 'float'............: %2i bytes.\n", sizeof(F));
    printf("Tamanho 'double'...........: %2i bytes.\n", sizeof(D));
    printf("Tamanho 'long double'......: %2i bytes.\n", sizeof(L));
    
    printf("\n");
    
    printf("Tamanho 'p char'.............: %2i bytes.\n", sizeof(PC));
    printf("Tamanho 'p int'..............: %2i bytes.\n", sizeof(PI));
    printf("Tamanho 'p short'............: %2i bytes.\n", sizeof(PS));
    printf("Tamanho 'p float'............: %2i bytes.\n", sizeof(PF));
    printf("Tamanho 'p double'...........: %2i bytes.\n", sizeof(PD));
    printf("Tamanho 'p long double'......: %2i bytes.\n", sizeof(PL));
    
    
    printf("\n");
    printf("Tecle <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}