//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.8)연습 문제 1
*/

int main(void)
{
	int x = 5, y = 1, z = 15;
	int result;

	result = ++x * 2;
	printf("result = %d\n", result);

	result = x + 1 > 0;
	printf("result = %d\n", result);

	result = x << y;
	printf("result = %d\n", result);

	result = (x + y) / 2;
	printf("result = %d\n", result);

	result = x = y;
	printf("result = %x\n", result);
}