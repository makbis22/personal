//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 5��
*/

int main()
{
	float x[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int i;

	printf("�迭 :");	//�迭 ���� ����
	for (i = 0; i < 10; i++) {
		printf("%.1f ", x[i]);
	}
	printf("\n");

	printf("���� :");	//�������� ����
	for (i = 9; i >= 0; i--) {
		printf("%.1f ", x[i]);
	}
	printf("\n");

	return 0;
}