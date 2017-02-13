#include <stdio.h>

int main()
{
    float salario;
    printf("Qual é o salário? ");
    scanf("%f", &salario);
    if (salario<=0)
        printf("Salário: valor inválido\n");
    else
        if (salario>1000)
            printf("Imposto = %.2f\n", salario*0.10);
        else
            printf("Impostos = %.2f\n", salario*0.05);
}