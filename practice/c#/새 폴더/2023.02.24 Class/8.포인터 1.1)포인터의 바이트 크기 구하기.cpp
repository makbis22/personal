//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 27
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 5��
*/

void get_min_max(int* x);

int main()
{
	int x[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	get_min_max(x);
}

void get_min_max(int* x)
{
	int i;
	int Min = *x, Max = *x;

	for (i = 0; i < 10; i++) {
		if (*(x + i) > Max) {
			Max = *(x + i);
		}
		else if (*(x + i) < Min) {
			Min = *(x + i);
		}
	}
	printf("�ִ� �� : %d\n", Max);
	printf("�ּ� �� : %d\n", Min);
}

void Print_Array(int* x, int f_Size)	//�迭�� ������ print��� �Լ�
{
	int i;

	for (i = 0; i < f_Size; i++) {
		printf("%d  ", x[i]);
	}
	printf("\n");
}

void Print_double_Array(double* x, double f_Size)	//�迭�� ������ print��� �Լ�
{
	int i;

	for (i = 0; i < f_Size; i++) {
		printf("%.2lf  ", x[i]);
	}
	printf("\n");
}