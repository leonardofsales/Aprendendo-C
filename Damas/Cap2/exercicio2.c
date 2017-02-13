#include <stdio.h>

main () {
    int dia, mes, ano;
    printf("Data no formato aaaa-mm-dd): ");
    scanf("%d-%d-%d", &ano, &mes, &dia);
    printf("Data completa: %d/%d/%d\n", dia, mes, ano);
}