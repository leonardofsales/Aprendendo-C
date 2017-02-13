//
//  c03ex02.c
//  Manzano-Xcode
//
//  Created by Leonardo Fontes De Sales on 05/06/16.
//  Copyright © 2016 Leonardo Fontes De Sales. All rights reserved.
//

#include <stdio.h>

int main()
{
    char PAUSA;
    
    int A, B, X;
    
    printf("Entre a seguir dois valores separando-os com <Enter>\n");
    scanf("%d%d", &A, &B);
    while((getchar() != '\n') && (!EOF));
    
    if (A > B)
    {
        X=A;
        A=B;
        B=X;
    }
    
    printf("Os valores ordenados são: %d e %d", A, B);
    
    printf("\n");
    printf("Teche <Enter> para encerrar...");
    PAUSA = getchar();
    
    return 0;
}
