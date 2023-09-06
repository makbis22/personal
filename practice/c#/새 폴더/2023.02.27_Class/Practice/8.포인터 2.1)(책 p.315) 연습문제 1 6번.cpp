//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 6번
*/

void get_area_Round(int* f_Width, int* f_Length);

int main()
{
	int Width, Length;
	
	int* x = &Width;
	int* y = &Length;

	printf("가로?");
	scanf("%d", &*x);
	printf("세로?");
	scanf("%d", &*y);

	get_area_Round(x, y);
}

void get_area_Round(int* f_Width, int* f_Length)
{
	int Area_Result = 0;
	int Round_Result = 0;

	Area_Result = *f_Width * *(f_Length);
	Round_Result = *f_Width + *(f_Length);

	printf("넓이 : %d, 둘레 : %d", Area_Result, Round_Result);
}