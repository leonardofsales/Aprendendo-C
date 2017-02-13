#define __STDC_WANT_LIB_EXT1__ 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char PAUSA;
    
    size_t TAMANHO;
    char *P1 = 0;
    char *P2 = 0;
    
    getenv_s(&TAMANHO, NULL, 0, "X");
    
    P1 = (char*) realloc(P1, TAMANHO * sizeof(char));
    
    if (!P1)
        printf_s("Memória indisponível\n");
    else
    {
        if (TAMANHO != 0)
        {
            getenv_s(&TAMANHO, P1, TAMANHO, "X");
            printf_s("Valor de X: %s\n", P1);
        }
        else
        printf_s("X nulo\n");
    }
    
    putenv(strdup("Y=90"));
    
    getenv_s(&TAMANHO, NULL, 0, "Y");
    P2 = (char*) realloc(P2, TAMANHO * sizeof(char));
    if (!P2)
        printf_s("Memória indisponível\n");
    else
    {
        if (TAMANHO != 0)
        {
            getenv_s(&TAMANHO, P2, TAMANHO, "Y");
            printf_s("Valor de Y: %s\n", P2);
        }
        else
        printf_s("Y nulo\n");
    }
    
    printf("\n");
    printf("Tecle <Enter> para encerrar...");
    PAUSA = getchar();
    
    free(strdup("Y=90"));
    free(P1);
    free(P2);
    
    return 0;
}