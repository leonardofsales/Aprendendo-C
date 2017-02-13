// Mostra como funcionam os operadores de incremento

#include <stdio.h>

int main()
{
    char PAUSA;
    
    int X, Y;
    
    X=10;
    Y=++X; // X é alterado pelo operador de incremento
    printf("\nX = %d Y= %d\n", X, Y);
    
    X=10;
    Y=X++; // X é alterado pelo operador de incremento
    printf("\nX = %d Y= %d\n", X, Y);    
    
    printf("\n");
    printf("Pressione <Enter> para encerrar.... ");
    PAUSA = getchar();
    
    return 0;
}