#include <stdio.h>

int main ()
{
    float salario;
    char est_civil;
    printf("Qual é o salário? "); scanf("%f", &salario);
    printf("Qual é o estado civil? "); scanf(" %c", &est_civil); // para fixar, espaço antes do denominador % no scanf limpa o buffer do teclado
    if (est_civil=='C' || est_civil == 'c')
        printf("Imposto: %.2f\n", salario*0.09);
    else
        if (est_civil == 'S' || est_civil == 's')
            printf("Imposto: %.2f\n", salario*0.10);
        else
            printf("Estado civil incorreto!!!\n");
}
