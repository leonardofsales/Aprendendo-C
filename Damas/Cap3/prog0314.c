#include <stdio.h>

int main()
{
    float salario, imposto = 0.0;
    char sexo;
    
    printf("Introduza o salário: ");
        scanf("%f", &salario);
    printf("Qual é o sexo: ");
        scanf(" %c", &sexo);
    switch(sexo)
        {
            case 'f':
            case 'F': imposto = 0.10; break;
            case 'm':
            case 'M': imposto = 0.15; break;
        }
    printf("Imposto a pagar: %.2f\n", salario*imposto);
}