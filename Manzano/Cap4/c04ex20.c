#include <stdio.h>

int main()
{
    char PAUSA;
    
    int I;
    
    char CAR;
    int COD;
    
    for (COD = 32; COD <= 127; COD++)
    {
        CAR = COD;
        printf("--> % c equivale ao código [%3d]\n", CAR, COD);
    }
    
    printf("\n");
    printf("Tecle <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}