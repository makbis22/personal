//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 7. �迭
*  2.2)(å p.271) �������� 2 9��
*/

int main()
{
	int x[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
	int y[3][3] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
	int i, j;
	int sum[3][3] = {};

	printf("x ��� : \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%2d ", x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("y ��� : \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%2d ", y[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("x + y ��� : \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum[i][j] = x[i][j] + y[i][j];
			printf("%2d ", sum[i][j]);
		}
		printf("\n");
	}
}
