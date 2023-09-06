//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.9)연습 문제 5
*/

/*7. 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 구하는
	프로그램을 작성하시오.*/
int main(void)
{
	int a, b;
	double result;

	printf("용매 ? ");
	scanf("%d", &a);

	printf("용질 ? ");
	scanf("%d", &b);

	result = (b / (double)(a + b)) * 100;

	printf("농도 : %.2f", result);
}