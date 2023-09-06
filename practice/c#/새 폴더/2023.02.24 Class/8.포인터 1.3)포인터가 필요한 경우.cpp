//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. 포인터
*  1.3)포인터가 필요한 경우
*/

void test1(int x)
{
	x = 20;
}

void test2(int* p)
{
	*p = 20;
}

int main()
{
	int x = 10;
	test1(x);
	printf("test1 호출 후 x = %d\n", x);		//x의 값 변경하지 않음

	test2(&x);
	printf("test2 호출 후 x = %d\n", x);		//x의 값 변경(직접 주소로 찾아가 변경하기 때문)
}
