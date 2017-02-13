#include <stdio.h>

main () {
    char ch;
    printf("Introduza um caractere: ");
    scanf("%c", &ch);
    printf("O caractere '%c' tem o ASCII número %d\n", ch, ch); // caracteres são armazenados como valores inteiros, dessa forma podemos especificar variáveis em formato tradicional ou via numeração ASCII
}