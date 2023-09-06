//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  2.2)공용체의 정의 및 사용
*/

union test {
	int i;
	char c;
	short s;
};

int main()
{
	union test t1 = { 0x12345678 };

	printf("t1.i의 주소 = %p\n", &t1.i);
	printf("t1.c의 주소 = %p\n", &t1.c);
	printf("t1.s의 주소 = %p\n", &t1.s);

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i = %x\n", t1.i);
	printf("t1.c = %x\n", t1.c);
	printf("t1.s = %x\n", t1.s);
}