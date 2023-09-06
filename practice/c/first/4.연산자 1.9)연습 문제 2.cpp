//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.9)연습 문제 2
*/

/*3.기본 요금과 월 사용량(kWh)을 입력받아 전기요금을 게산하는 프로그램을 작성하시오.
	사용량에 따른 요금은 190원/hWh이다.*/
int main(void)
{
	int Month_W;
	int Basic_Money;
	int Money;
	int kwh = 190;

	printf("기본 요금? : ");
	scanf("%d", &Basic_Money);
	printf("월 사용량(kWh)를 입력해주세요. : ");
	scanf("%d", &Month_W);

	Money = Basic_Money + Month_W * kwh;
	printf("전기 요금 : %d\n", Money);
}