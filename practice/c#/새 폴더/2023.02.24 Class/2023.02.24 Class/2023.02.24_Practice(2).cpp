//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 1��
*/

//int main()
//{
//	double x[10] = { 0.1, 2, 3.4, 4.5, 7, 9.7, 7.8, 1.4, 6.6, 7.2 };
//	double* p = x;
//	int i;
//	int Size = sizeof(x) / sizeof(x[0]);
//
//	for (i = 0; i < Size; i++) {
//		printf("%.2lf  ", *(p + i));
//	}
//}

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 2��
*/

//int main()
//{
//	double x[3] = {};
//	double* p = x;
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("x[%d]�� �ּ� : %p\n", i, (p+i));
//		printf("x[%d]�� �ּ� : %p\n", i, &x[i]);
//	}
//}

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 3��
*/

//int main()
//{
//	int x[10] = { 12, 54, 23, 43, 87, 31, 67, 92, 79, 7 };
//	int* p = x;
//	int Size = sizeof(x) / sizeof(x[0]);
//	int i;
//	int Num;
//
//	Print_Array(x, Size);
//
//	printf("����?");
//	scanf("%d", &Num);
//
//	for (i = 0; i < Size; i++) {
//		*(p + i) += Num;
//	}
//	Print_Array(p, Size);
//}

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 4��
*/

//int main()
//{
//	double x[5] = { };
//	double* p = x;
//	double Sum = 0;
//	int i;
//
//	printf("�Ǽ� 5���� �Է� : ");
//	for (i = 0; i < 5; i++) {
//		scanf("%lf", &*(p+i));
//	}
//	for (i = 0; i < 5; i++) {
//		Sum += *(p + i);
//	}
//	printf("�հ� = %.2lf", Sum);
//	}

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 5��
*/

//�̿ϼ�
void get_min_max(int* x);

int main()
{
	int x[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	get_min_max(x);
}

void get_min_max(int* x)
{
	int i;
	int Min = 0, Max = 0;

	for (i = 0; i < 10; i++) {
		if (*(x+i+1) > *(x+i)) {
			Max = *(x + i);
		}
		else if (*(x+i+1) < *(x+1)) {
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