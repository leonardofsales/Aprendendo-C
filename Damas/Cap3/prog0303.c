#include <stdio.h>

main () {
    int x;
    printf("Introduza um número ");
    scanf("%d", &x);
    if (x!=0)
        printf("%d não é zero\n", x);
    else
        printf("%d é igual a zero!!!\n", x);
}