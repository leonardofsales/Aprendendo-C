#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[ ][DIM])
{
    int i,j;
    for (i=0; i<DIM; i++)
        for (j=0; j<DIM; j++)
            s[i][j]=ESPACO;
}

void mostra(char s[DIM][DIM])
{
    int i,j;
    for (i=0; i<DIM; i++)
    {
        for (j=0; j<DIM; j++)
            printf("%c %c", s[i][j], j==DIM-1?' ':'|');
        if (i!=DIM-1) printf("\n----------");
        putchar('\n');
    }
}

int main()
{
    char Velha[DIM][DIM];
    int posx, posy;
    char ch='O';
    int n_jogadas=0;
    
    inic(Velha);
    while(1)
    {
        mostra(Velha);
        printf("\nIntroduza a posição de jogo linha coluna para %c: ", ch=='O' ? 'X' : 'O');
        scanf("%d %d", &posx, &posy);
        if (Velha[posx][posy]==ESPACO)
        {
            Velha[posx][posy] = ch = (ch=='O') ? 'X' : 'O'; n_jogadas++;
        }
        else
            printf("Posição já ocupada\nJogue novamente!!!\n");
        if (n_jogadas==DIM*DIM)
            break;
    }
    mostra(Velha);
}