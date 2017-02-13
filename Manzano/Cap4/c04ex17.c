#include <stdio.h>
#include <math.h>

int main()
{
    char PAUSA;
    
    unsigned short A, B, C;
    
    for (A = 1; A <= 10; A++)
        for (B = 1; B <= 10; B++)
            for (C =1; C <= 10; C++)
                if (pow(A,2) + pow(B,2) = pow(C,2))
                {
                    printf("Terno pitagórico: %d %d %d\n", A, B, C);
                    goto saida;
                }
    saida:
    
    return 0;
}