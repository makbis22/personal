//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 27
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 6��
*/

void get_area_Round(int* f_Width, int* f_Length);

int main()
{
	int Width, Length;
	
	int* x = &Width;
	int* y = &Length;

	printf("����?");
	scanf("%d", &*x);
	printf("����?");
	scanf("%d", &*y);

	get_area_Round(x, y);
}

void get_area_Round(int* f_Width, int* f_Length)
{
	int Area_Result = 0;
	int Round_Result = 0;

	Area_Result = *f_Width * *(f_Length);
	Round_Result = *f_Width + *(f_Length);

	printf("���� : %d, �ѷ� : %d", Area_Result, Round_Result);
}