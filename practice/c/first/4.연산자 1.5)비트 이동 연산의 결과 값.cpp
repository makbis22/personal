//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. 연산자
*  1.5)비트 이동 연산의 결과 값
*/

int main(void)
{
	unsigned int x = 0xab;
	unsigned int y = 0x0f;

	printf("%08x & %08x = %08x\n", x, y, x & y);
	printf("%08x | %08x = %08x\n", x, y, x | y);
	printf("%08x ^ %08x = %08x\n", x, y, x ^ y);
	printf("~%08x = %08x\n", x, ~x);

}