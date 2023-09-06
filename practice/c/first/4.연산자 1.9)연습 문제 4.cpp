//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.9)연습 문제 4
*/

/*5. 화씨 온도(F)를 실수로 입력받아 섭씨온도(C)로 변환해서 
	출력하는 프로그램을 작성하시오.*/
int main(void)
{
	int F;
	double C;

	printf("화씨 온도? :");
	scanf("%d", &F);

	C = ((double)F - 32) * 5 / 9;

	printf("%d F = %.2f C", F, C);
}