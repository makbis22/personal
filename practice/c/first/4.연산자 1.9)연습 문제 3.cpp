//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.9)연습 문제 3
*/

/*8. 동영상의 재생 시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는
	프로그램을 작성하시오.*/
int main(void)
{
	int Play_Sec = 0;
	int Hour, Min, Sec;

	printf("재생 시간(초)? :");
	scanf("%d", &Play_Sec);

	Hour = Play_Sec / 60 / 60;
	Min = (Play_Sec / 60) % 60;
	Sec = Play_Sec % 60;

	printf("재생 시간은 %d시간 %d분 %d초 입니다.", Hour, Min, Sec);
}