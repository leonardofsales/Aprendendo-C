#include <stdio.h>

int main ()
{
    float salario;
    printf("Qual é o salário? "); scanf("%f", &salario);
    salario = salario > 1000 ? salario*1.05 : salario*1.07;
    printf("Novo salário é %.2f\n", salario);
}