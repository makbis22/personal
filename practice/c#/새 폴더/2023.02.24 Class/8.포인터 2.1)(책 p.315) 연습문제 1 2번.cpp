//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 2��
*/

int main()
{
	double x[3] = {};
	double* p = x;
	int i;

	for (i = 0; i < 3; i++) {
		printf("x[%d]�� �ּ� : %p\n", i, (p + i));
		printf("x[%d]�� �ּ� : %p\n", i, &x[i]);
	}
}

