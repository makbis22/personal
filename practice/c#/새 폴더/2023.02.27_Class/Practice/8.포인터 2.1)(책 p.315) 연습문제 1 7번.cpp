//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 27
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 7��
*/

void Print_Array(int* x, int f_Size);
void get_swap_araay(int* f_x, int* f_y, int f_Size);

int main()
{
	int x[] = { 1, 3, 5, 7, 9 };
	int y[] = { 0, 2, 4, 6, 8 };
	int* px = x;
	int* py = y;

	printf("a �迭 : ");
	Print_Array(px, 5);
	printf("b �迭 : ");
	Print_Array(py, 5);

	get_swap_araay(px, py, 5);
	printf("<< swap_array ȣ�� �� >>\n");

	printf("a �迭 : ");
	Print_Array(px, 5);
	printf("b �迭 : ");
	Print_Array(py, 5);
}

void get_swap_araay(int* f_x, int* f_y, int f_Size)
{
	int Swap;
	int i;

	for (i = 0; i < f_Size; i++) {
		Swap = *(f_x + i);
		*(f_x + i) = *(f_y + i);
		*(f_y + i) = Swap;
	}
}

void Print_Array(int* x, int f_Size)	//�迭�� ������ print��� �Լ�
{
	int i;

	for (i = 0; i < f_Size; i++) {
		printf("%d  ", x[i]);
	}
	printf("\n");
}