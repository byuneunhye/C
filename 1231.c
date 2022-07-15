#include <stdio.h>

int main()
{
    int a,b;
    char c; //+,-,*,/ 같은 기호는 문자열로 받아줌
    scanf("%d%c%d",&a,&c,&b);
    if(c=='+') printf("%d",a+b); //만약 문자열의 기호가 '+' 라면 더하기 연산을 한다.
    else if(c=='-') printf("%d",a-b);
    else  if(c=='*') printf("%d",a*b);
    else printf("%.2lf",(float)a/(float)b); //소수점 둘째 자리까지 : %.2lf , 실수형으로 강제형 변환 : (float)



}


// 입력에 연산자가 있어서 이걸 어떻게 받는지 처음에 잘 몰랐다. 그리고 살짝의 고민 끝에 연산자는 문자열로 받고, 이게 어떤 연산자인지에 따라 어떤 연산을 할지 결정하는 if문을 썼다. 

