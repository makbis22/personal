//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 4번
*/

int main()
{
	double x[5] = { };
	double* p = x;
	double Sum = 0;
	int i;

	printf("실수 5개를 입력 : ");
	for (i = 0; i < 5; i++) {
		scanf("%lf", &*(p + i));
	}
	for (i = 0; i < 5; i++) {
		Sum += *(p + i);
	}
	printf("합계 = %.2lf", Sum);
}