#include <stdio.h>
//칼로리 계산하기
int main()
{
    int a,b,menu,menu2;
    scanf("%d %d",&a,&b);
    menu=a==1?400:a==2?340:a==3?170:70; //첫번째 입력받은 메뉴
    menu2=b==1?400:b==2?340:b==3?170:70; //두번째 입력받은 메뉴
    printf(menu+menu2>500?"angry":"no angry"); //두 메뉴의 합이 500보다 작으면 참, 아니면 거짓 출력



    return 0;
}

