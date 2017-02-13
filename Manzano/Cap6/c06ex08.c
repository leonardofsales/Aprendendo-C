#include <stdio.h>
#include <time.h>

int main()
{
    time_t TEMPO = time(NULL);
    
    printf("%s", ctime(&TEMPO));
    
}