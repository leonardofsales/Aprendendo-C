#include <stdio.h>
#include <math.h>

int main()
{
    
    printf("%14.10f\n", acos(-1));
    printf("%14.10f\n", acos(0.5)*180/M_PI);
    printf("%14.10f\n", asin(-1));
    printf("%14.10f\n", asin(0.5)*180/M_PI);
    printf("%14.10f\n", atan(0.5));
    printf("%14.10f\n", atan(1)*180/M_PI);
    printf("%14.10f\n", atan2(1,1));
    printf("%14.10f\n", atan2(-1,-1));
    printf("%14.10f\n", cos(45*M_PI/180));
    printf("%14.10f\n", cos(atan(1)));
    printf("%14.10f\n", sin(M_PI/6));
    printf("%14.10f\n", sin(1));
    printf("%14.10f\n", tan(4));
    printf("%14.10f\n", tan(M_PI/4));
}