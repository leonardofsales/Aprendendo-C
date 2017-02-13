#include <stdio.h>

int main()
{
	char PAUSA;
	float HT, VH, PD,TD, SB, SL;
	
	printf("Entre a quantidade de horas trabalhadas...: ");
	scanf("%f", &HT);
	while((getchar() != '\n') && (!EOF));
	
	printf("Entre o valor da hora de trabalho...: ");
	scanf("%f", &VH);
	while((getchar() != '\n') && (!EOF));
	
	printf("Entre o valor do percentual do desconto...: ");
	scanf("%f", &PD);
	while((getchar() != '\n') && (!EOF));
	
	SB=HT*VH;
	TD=(PD/100)*SB;
	SL=SB-TD;
	
	printf("\n");
	printf("Salário bruto...: %8.2f\n", SB);
	printf("Desconto........: %8.2f\n", TD);
	printf("Salário líquido.: %8.2f\n", SL);
	
	printf("\n");
	printf("Tecle ENTER para encerrar...");
	PAUSA=getchar();
	
	return 0;	
}