// Faz conversão entre decimal, octal e hexadecimal

#include <stdio.h>

int main()
{
    char PAUSA;
    int NI, NO, NH;
    
    printf("Informe um valor inteiro na base decimal: ");
    scanf("%i", &NI);
    while ((getchar() != '\n') && (!EOF));
    
    printf("O valor %d é igual a %o na base octal.\n", NI, NI);
    printf("O valor %d é igual a %x na base hexadecimal minúsculo.\n", NI, NI);
    printf("O valor %d é igual a %X na base hexadecimal maiúsculo.\n", NI, NI);
    
    printf("Informe um valor inteiro octal: ");
    scanf("%o", &NO);
    while ((getchar() != '\n') && (!EOF));
    
    printf("O valor octal %o é igual a %i inteiro decimal.\n", NO, NO);
    printf("O valor %o é igual a %x na base hexadecimal minúsculo.\n", NO, NO);
    printf("O valor %o é igual a %X na base hexadecimal maiúsculo.\n", NO, NO);
    
    printf("Informe um valor inteiro hexadecimal: ");
    scanf("%x", &NH);
    while ((getchar() != '\n') && (!EOF));
    
    printf("O valor hexadecimal %X é igual a %d inteiro decimal.\n", NH, NH);
    printf("O valor %x é igual a %o inteiro octal\n", NH, NH);
    
    printf("\n");
    printf("Pressione <Enter> para encerrar.... ");
    PAUSA = getchar();
    
    return 0;
}