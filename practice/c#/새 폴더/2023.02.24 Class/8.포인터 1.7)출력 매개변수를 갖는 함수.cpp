//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. ������
*  1.7)��� �Ű������� ���� �Լ�
*  - ���� ������ �ּҸ� �Լ��� ������ �����Լ��� ���� �ּҿ� ������ ������
*/

void get_sum_product(int x, int y, int* psum, int* pproduct)
{
	*psum = x + y;
	*pproduct = x * y;
}

int main(void)
{
	int sum, product;
	get_sum_product(123, 456, &sum, &product);
	printf("sum = %d, product = %d\n", sum, product);

	return 0;
}
