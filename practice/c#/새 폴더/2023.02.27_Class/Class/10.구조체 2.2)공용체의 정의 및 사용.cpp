//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. ����ü
*  2.2)����ü�� ���� �� ���
*/

union test {
	int i;
	char c;
	short s;
};

int main()
{
	union test t1 = { 0x12345678 };

	printf("t1.i�� �ּ� = %p\n", &t1.i);
	printf("t1.c�� �ּ� = %p\n", &t1.c);
	printf("t1.s�� �ּ� = %p\n", &t1.s);

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i = %x\n", t1.i);
	printf("t1.c = %x\n", t1.c);
	printf("t1.s = %x\n", t1.s);
}