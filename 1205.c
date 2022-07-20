#include <stdio.h>
#include <math.h>
//최댓값
int main()
{
    int a,b,p,m,g,d,s1,s2;
    scanf("%d %d",&a,&b);
    p=a+b; //플러스
    m=a-b>b-a?a-b:b-a; //마이너스
    g=a*b; //곱하기
    d=a/b>b/a?a/b:b/a; //디바이드
    s1=pow(a,b); //제곱 승
    s2=pow(b,a); //제곱 승 2

    float max; //최댓값을 실수로 출력해야 함.
    max=p>m?p:m; //먼저 max값에 플러스값과 마이너스 값 비교해서 큰 값으로 넣어줌.
    max=max>g?max:g; //max랑 곱한 값 하나하나 비교
    max=max>d?max:d;
    max=max>s1?max:s1;
    max=max>s2?max:s2;

    printf("%.6lf",max); //최댓값 출력





    return 0;
}

