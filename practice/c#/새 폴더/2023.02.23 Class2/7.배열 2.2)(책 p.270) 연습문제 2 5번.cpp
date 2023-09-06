//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 5번
*/

int main()
{
	float x[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int i;

	printf("배열 :");	//배열 내용 나열
	for (i = 0; i < 10; i++) {
		printf("%.1f ", x[i]);
	}
	printf("\n");

	printf("역순 :");	//역순으로 정렬
	for (i = 9; i >= 0; i--) {
		printf("%.1f ", x[i]);
	}
	printf("\n");

	return 0;
}