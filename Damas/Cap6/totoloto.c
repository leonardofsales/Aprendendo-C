// Escreva um programa que permita gerar uma jogada para cada tipo de sena
// indicando os nũmeros a apostar, que deverão ser gerados aleatoriamente

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 60 // total do número de jogos
#define MIN_APOSTA 6 //aposta mínima
#define NUM_LIN 10 // número de números apresentados por linha no volante

void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

/* 
 * Inicia o gerador de números aleatórios com um número que depende
 * da hora que se executa a função.
 */
 
 void Inic_Random()
 {
     long ultime;
     time(&ultime);
     srand((unsigned)ultime);
 }
 
 /* Inicia com zero o vetor de controle dos números selecionados */
 
 void Inic(int v[])
 {
     int i;
     for(i=0; i<NUMS; i++)
        v[i]=0;
 }
 
 /*
  * Lê o número de números a apostar. Aceita valores entre MIN_APOSTA e NUMS.
  * Aceita o valor ZERO para indicar que se quer finalizar o programa.
  */

int Ler_Ns_Apostar()
{
    int n;
    do
    {
        printf("Quantos números quer apostar? ( 0 - Terminar)");
        scanf("%d", &n);
    }
    while ((n<MIN_APOSTA || n>NUMS) && n!=0);
    return n;
}

/*
 * Gera n números aleatórios e coloca a respectiva posição do vetor
 * com o valor 1 que indica que esse número foi selecionado.
 */

void Gerar(int *v, int n)
{
    int i, indice;
    for (i=1; i<=n; i++)
    {
        indice = rand()%NUMS; // Devolve o número aleatório entre 0 e NUMS-1
        if (v[indice]==0) // Não foi selecionado
            v[indice]=1;
        else // Este número já tinha sido selecionado
        i--; // logo decrementa-se o contador para voltar a
            // calcular mais uma vez o i-nésimo número aleatório
    }
}

/*
 * Apresenta o formato do volante colocando XX nos números
 * selecionados para a aposta.
 */

void Apresentar(int res[])
{
    int i;
    for (i=0; i<NUMS; i++)
    {
        if (res[i]==0)
            printf(" %2d", i+1);
        else
            printf(" XX");
        if ((i+1)%NUM_LIN==0) putchar('\n');
    }
    putchar('\n');
}

int main()
{
    int vetor[NUMS]; // Número de números para jogar no jogo 6..49
    int n_nums;
    Inic_Random();
    while(1)
    {
        Inic(vetor);
        if ((n_nums=Ler_Ns_Apostar())==0) break;
        Gerar(vetor,n_nums);
        Apresentar(vetor);
    }
}