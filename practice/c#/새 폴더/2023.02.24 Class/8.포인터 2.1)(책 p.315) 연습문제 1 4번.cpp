//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 4��
*/

int main()
{
	double x[5] = { };
	double* p = x;
	double Sum = 0;
	int i;

	printf("�Ǽ� 5���� �Է� : ");
	for (i = 0; i < 5; i++) {
		scanf("%lf", &*(p + i));
	}
	for (i = 0; i < 5; i++) {
		Sum += *(p + i);
	}
	printf("�հ� = %.2lf", Sum);
}