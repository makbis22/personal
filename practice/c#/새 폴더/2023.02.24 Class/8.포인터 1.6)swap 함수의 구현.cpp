//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. ������
*  1.6)swap �Լ��� ����
*  - �����͸� �̿��� �ּҿ� ����� ���� ������ main�Լ��� ������ ������ �����ϴ� ���
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