#include <stdio.h>
//t를 찾아라 !


int main()
{
   char d[11]; //문자열 입력 받음
   int t[11],i; // t 개수 세는 배열, 인덱스 i 선언
   scanf("%s",d); // 띄어쓰기 없이 입력 받는거라 gets 아닌 scanf로 가능
   for(i=0; d[i]!='\0'; i++) //입력 받은 문자열이 널 값이 아닐 때 까지 반복
   {
       if(d[i]=='t')  //입력받은 문자열에 t가 있다면
       {
           t[i]=i;      //t 개수 세는 배열에 인덱스 값을 저장 함.
        printf("%d ",t[i]+1);    //배열은 0부터 시작이고,  출력할 값은 1부터 세서 t[i]+1 을 해줌.(배열 방 번호를 +1로 바꿔줌)
       }

        else  printf("");//t가 아닌 값은 공백, 띄어쓰기로 하니까 표현 에러 뜸.
   }

}



