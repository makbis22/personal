//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 7번
*/

int main()
{
	float num[5] = {};
	int i;
	int size;
	float sum = 0;

	size = sizeof(num) / sizeof(num[0]);

	printf("실수 5개를 입력하세요");
	for (i = 0; i < size; i++) {	//실수 5개 입력 받는 구문
		scanf("%f", &num[i]);
	}

	for (i = 0; i < size; i++) {
		sum += num[i];
	}
	printf("합계 : %f", sum);

	return 0;
}