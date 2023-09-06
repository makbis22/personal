//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. 포인터
*  1.6)swap 함수의 구현
*  - 포인터를 이용해 주소에 저장된 값을 변경해 main함수에 변수의 내용을 변경하는 방법
*/

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main()
{
	int a = 1, b = 2;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}