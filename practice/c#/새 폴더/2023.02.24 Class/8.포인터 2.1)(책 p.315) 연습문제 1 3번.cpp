//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 3��
*/

void Print_Array(int* x, int f_Size)	//�迭�� ������ print��� �Լ�
{
	int i;

	for (i = 0; i < f_Size; i++) {
		printf("%d  ", x[i]);
	}
	printf("\n");
}
int main()
{
	int x[10] = { 12, 54, 23, 43, 87, 31, 67, 92, 79, 7 };
	int* p = x;
	int Size = sizeof(x) / sizeof(x[0]);
	int i;
	int Num;

	Print_Array(x, Size);

	printf("����?");
	scanf("%d", &Num);

	for (i = 0; i < Size; i++) {
		*(p + i) += Num;
	}
	Print_Array(p, Size);
}

