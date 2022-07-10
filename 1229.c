#include <stdio.h>

int main()
{
    double h,w;
    scanf("%lf %lf",&h,&w);
    double pw,b;
    pw=((h<150?h-150:h>=150&&h<160?(h-150)/2+50:(h-100)*0.9));
    b=(w-pw)*100/pw;
    printf(b<=10?"정상":b>10&&b<=20?"과체중":"비만");

}
