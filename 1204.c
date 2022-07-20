#include <stdio.h>
//영어 서수로 표현하기
int main()
{
    int a;
    scanf("%d",&a); //정수 하나 입력 받음
    printf(a==11?"%dth":a==12?"%dth":a==13?"%dth":a%10==1&&a!=11?"%dst":a%10==2&&a!=12?"%dnd":a%10==3&&a!=13?"%drd":"%dth",a,a,a,a,a,a,a);
            //a가 11,12,13중 하나면 th,      
            //a를 10으로 나눴을 때 나머지가 1이면 st,
            //a를 10으로 나눴을 때 나머지가 2이면 nd,
            //a를 10으로 나눴을 때 나머지가 3이면 rd 를 붙여 줌.
            //나머지는 th 붙임.

    return 0;
}

