#include <stdio.h>
//축구의 신 2

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); //현재 경기 타임, 1반득점, 2반득점
    int time=a%5==0?(90-a)/5:(90-a)/5+1; //현재경기타임부터 5분씩 증가하고, 90분에 넣는 골은 포함 하지 않음, 90으로 나눠 떨어지는 경우는 그냥 계산 하면 되는데, 안 나눠 떨어지는 경우는+1을 해야 답이 나옴.

    printf(time+b>c?"win":time+b<c?"lose":"same");

    return 0;
}
