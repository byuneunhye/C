#include <stdio.h>
#include <math.h>
//삼각형 판단
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); //세 변의 길이 입력 받음

    int t=pow(a,2)+pow(b,2); //직각삼각형
    int t2=pow(c,2); //직각삼각형

    printf(a==b&&a==c?"정삼각형":(a==b||a==c||b==c)&&a<b+c&&b<a+c&&c<a+b?"이등변삼각형":t==t2?"직각삼각형":a>b&&a>c&&a<b+c||b>c&&b>a&&b<a+c||c>a&&c>b&&c<a+b?"삼각형":"삼각형아님");
  //a랑b랑 같고 b랑c랑 같으면 a랑c는 당연히 같기 때문에 저 두 식만 적어도 됨
  //두 변 길이 같고, 젤 긴 변의 길이가 나머지 두 변의 길이 합 보다 작아야 함.
  // pow 쓸 수 있는 math.h 헤더파일 들고와서 제곱 계산 해 줌
  // 젤 긴 변의 길이가 나머지 두 변의 길이 합 보다 작으면 삼각형, 나머지 삼각형 아님.

    return 0;
}
