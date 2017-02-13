#include <stdio.h>

main () {
    int x;
    printf("Introduza um número ");
    scanf("%d", &x);
    if (x>0)
        printf("Número positivo\n");
    else
        printf("Número negativo\n");
}