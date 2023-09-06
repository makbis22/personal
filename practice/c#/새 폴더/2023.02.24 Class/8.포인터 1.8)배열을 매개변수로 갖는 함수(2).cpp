//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. 포인터
*  1.8)배열을 매개변수로 갖는 함수(2)
*  - 전 내용의 주소의 내용 변경을 이용해 배열을 복사하는 방법
*/

void copy_array(int *source, int *target, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		target[i] = source[i];
	}
}

void print_array(const int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 0 };

	printf("x = ");
	print_array(x, 5);

	copy_array(x, y, 5);

	printf("y = ");
	print_array(y, 5);
}
