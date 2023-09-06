//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. 포인터
*  1.2)포인터의 사용
*/

int main()
{
	int a = 10;
	int* p = &a;

	printf("a = %d\n", a);
	printf("&a = %p\n", &a);

	printf("p = %p\n", p);
	printf("*p = %p\n", *p);
	printf("&p = %p\n", &p);

	*p = 20;
	printf("p = %d\n", *p);

	return 0;
}
