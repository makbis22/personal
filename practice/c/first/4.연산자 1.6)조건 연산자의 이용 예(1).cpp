//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.6)조건 연산자의 이용 예(1)
*/
int main(void)
{
	int x, y;
	int abs, min, max;

	printf("Input tow number : ");
	scanf("%d %d", &x, &y);

	abs = x > 0 ? x : -x;
	printf("absolute value of x = %d\n", abs);

	abs = y > 0 ? y : -y;
	printf("absolute value of y = %d\n", abs);

	min = x < y ? x : y;
	printf("minimum value of x, y = %d\n", min);

	max = x > y ? x : y;
	printf("maximum value of x,y = %d\n", max);
}