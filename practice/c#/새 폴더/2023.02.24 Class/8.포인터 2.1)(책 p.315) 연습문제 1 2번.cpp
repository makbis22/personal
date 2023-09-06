//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 2번
*/

int main()
{
	double x[3] = {};
	double* p = x;
	int i;

	for (i = 0; i < 3; i++) {
		printf("x[%d]의 주소 : %p\n", i, (p + i));
		printf("x[%d]의 주소 : %p\n", i, &x[i]);
	}
}

