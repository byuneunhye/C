#include <stdio.h>
//이 달은 며칠까지 있을까?
int main()
{
    int a,b,yun;//윤년은 yun~
    scanf("%d %d",&a,&b);



    yun=(a%400==0||a%4==0&&a%100!=0)?29:28; //윤년인 경우: a가 400의 배수거나, 4의 배수인 a중에서 100의 배수가 아닌거. 윤년이면 2월이 29일 까지 있음
    printf("%d",b==2?yun:b==1||b==3||b==1||b==5||b==7||b==8||b==10||b==12?31:30);//2월을 입력 받은 경우에는 yun에서 계산 한 값 출력, 나머지 31일 든 달, 그 외.


    return 0;
}
