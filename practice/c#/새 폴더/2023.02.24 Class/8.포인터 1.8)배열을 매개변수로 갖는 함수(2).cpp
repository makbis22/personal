//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. ������
*  1.8)�迭�� �Ű������� ���� �Լ�(2)
*  - �� ������ �ּ��� ���� ������ �̿��� �迭�� �����ϴ� ���
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
