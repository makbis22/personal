//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.3)논리 연산식의 이용
*/

int main(void)
{
	int w = 10, x = 20, y = 10, z = 7;
	int result = 0;

	result += w;
	printf("result = %d\n", result);

	result *= x;
	printf("result = %d\n", result);

	result /= y;
	printf("result = %d\n", result);

	result %= z;
	printf("result = %d\n", result);

	result *= 2 + 1;
	printf("result = %d\n", result);
}