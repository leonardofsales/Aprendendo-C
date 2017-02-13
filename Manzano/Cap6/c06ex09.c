#include <stdio.h>
#include <time.h>

int main()
{
    time_t TEMPO;
    struct tm MOMENTO;
    
    time(&TEMPO);
    MOMENTO = *localtime(&TEMPO);
    
    printf("Dia............: %02d\n", MOMENTO.tm_mday);
    printf("Mês............: %02d\n", MOMENTO.tm_mon+1);
    printf("Ano............: %02d\n", MOMENTO.tm_year+1900);
    printf("\n");
    printf("Hora...........: %02d\n", MOMENTO.tm_hour);
    printf("Minuto.........: %02d\n", MOMENTO.tm_min);
    printf("Segundo........: %02d\n", MOMENTO.tm_sec);
}