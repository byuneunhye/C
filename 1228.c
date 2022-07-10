#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf",&a,&b);
    double w,x;
    w=(float)(a-100)*0.9;//강제형 변환 안 하면 오류남
    x=(float)(b-w)*100/w;
    if(x<=10)
       printf("정상");
    else if(x>10&&x<=20)
        printf("과체중");
    else if(x>20)
        printf("비만");
  // printf(x<=10?"정상":?"과체중":"비만");

}



