//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 3번
*/

void Print_Array(int* x, int f_Size)	//배열의 나열을 print출력 함수
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

	printf("정수?");
	scanf("%d", &Num);

	for (i = 0; i < Size; i++) {
		*(p + i) += Num;
	}
	Print_Array(p, Size);
}

