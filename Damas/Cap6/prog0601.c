// Escreva um programa que realize a leitura dos salários pagos a um
// indivídio durante um ano. Em seguida, o programa deverá mostrar
// os valores mensais e o total anual

#include <stdio.h>

int main()
{
    float sal[12];
    float total;
    int i;
    
    for (i=0; i<12 ;i++)
    {
        printf("Introduza o salário do mês %d:", i+1);
        scanf("%f", &sal[i]);
    }
    puts("Mês          Valor  ");
    for (i=0, total=0.0; i<12; i++)
    {
        printf("%3d          %9.2f\n", i+1,sal[i]);
        total += sal[i];
    }
    printf("Total anual: %9.2f\n", total);
}