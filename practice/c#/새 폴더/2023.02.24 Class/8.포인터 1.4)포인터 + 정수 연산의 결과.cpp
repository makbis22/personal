//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. 포인터
*  1.4)포인터 + 정수 연산의 결과
*/

int main()
{
	int* p = (int*)0x100;
	double* q = (double*)0x100;
	char* r = (char*)0x100;

	printf("int*	: %p, %p, %p\n", p, p + 1, p + 2);
	printf("double*	: %p, %p, %p\n", q, q + 1, q + 2);
	printf("char*	: %p, %p, %p\n", r, r + 1, r + 2);
}
