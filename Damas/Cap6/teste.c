// Escreva um programa que coloque o tabuleiro do jogoa da velha na tela 

#include <stdio.h>
#define DIM 3

int main()
{
    char Velha[DIM][DIM] = {{' ',' ', ' '},{' ',' ',' '},{' ',' ',' '}};
    int i,j;
    
    Velha [0][0] = 'X';
    Velha [1][1] = 'X';
    Velha [0][2] = 'O';
    Velha [2][2] = 'O';
    
    for (i=0; i<DIM;i++)
    {
        for (j=0;j<DIM;j++)
            printf("%c %c", Velha[i][j], j==DIM-1?' ':'|');
        if (i!=DIM) printf("\n----------\n");
    }
}

