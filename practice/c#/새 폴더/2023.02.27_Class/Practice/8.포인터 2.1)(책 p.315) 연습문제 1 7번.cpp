//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 7번
*/

void Print_Array(int* x, int f_Size);
void get_swap_araay(int* f_x, int* f_y, int f_Size);

int main()
{
	int x[] = { 1, 3, 5, 7, 9 };
	int y[] = { 0, 2, 4, 6, 8 };
	int* px = x;
	int* py = y;

	printf("a 배열 : ");
	Print_Array(px, 5);
	printf("b 배열 : ");
	Print_Array(py, 5);

	get_swap_araay(px, py, 5);
	printf("<< swap_array 호출 후 >>\n");

	printf("a 배열 : ");
	Print_Array(px, 5);
	printf("b 배열 : ");
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

void Print_Array(int* x, int f_Size)	//배열의 나열을 print출력 함수
{
	int i;

	for (i = 0; i < f_Size; i++) {
		printf("%d  ", x[i]);
	}
	printf("\n");
}