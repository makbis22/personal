//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 5번
*/

//void get_min_max(int* x);
//
//int main()
//{
//	int x[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
//	get_min_max(x);
//}
//
//void get_min_max(int* x)
//{
//	int i;
//	int Min = *x, Max = *x;
//
//	for (i = 0; i < 10; i++) {
//		if (*(x + i) > Max) {
//			Max = *(x + i);
//		}
//		else if (*(x + i) < Min) {
//			Min = *(x + i);
//		}
//	}
//	printf("최대 값 : %d\n", Max);
//	printf("최소 값 : %d\n", Min);
//}

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 6번
*/

//void get_area_Round(int* f_Width, int* f_Length);
//
//int main()
//{
//	int Width, Length;
//	
//	int* x = &Width;
//	int* y = &Length;
//
//	printf("가로?");
//	scanf("%d", &*x);
//	printf("세로?");
//	scanf("%d", &*y);
//
//	get_area_Round(x, y);
//}
//
//void get_area_Round(int* f_Width, int* f_Length)
//{
//	int Area_Result = 0;
//	int Round_Result = 0;
//
//	Area_Result = *f_Width * *(f_Length);
//	Round_Result = *f_Width + *(f_Length);
//
//	printf("넓이 : %d, 둘레 : %d", Area_Result, Round_Result);
//}

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 6번
*/

//void get_area_Round(int* f_Width, int* f_Length);
//
//int main()
//{
//	int Width, Length;
//
//	int* x = &Width;
//	int* y = &Length;
//
//	printf("가로?");
//	scanf("%d", &*x);
//	printf("세로?");
//	scanf("%d", &*y);
//
//	get_area_Round(x, y);
//}
//
//void get_area_Round(int* f_Width, int* f_Length)
//{
//	int Area_Result = 0;
//	int Round_Result = 0;
//
//	Area_Result = *f_Width * *(f_Length);
//	Round_Result = *f_Width + *(f_Length);
//
//	printf("넓이 : %d, 둘레 : %d", Area_Result, Round_Result);
//}

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 7번
*/

//void Print_Array(int* x, int f_Size);
//void get_swap_araay(int* f_x, int* f_y, int f_Size);
//
//int main()
//{
//	int x[] = { 1, 3, 5, 7, 9 };
//	int y[] = { 0, 2, 4, 6, 8 };
//	int* px = x;
//	int* py = y;
//
//	printf("a 배열 : ");
//	Print_Array(px, 5);
//	printf("b 배열 : ");
//	Print_Array(py, 5);
//
//	get_swap_araay(px, py, 5);
//	printf("<< swap_array 호출 후 >>\n");
//
//	printf("a 배열 : ");
//	Print_Array(px, 5);
//	printf("b 배열 : ");
//	Print_Array(py, 5);
//}
//
//void get_swap_araay(int* f_x, int* f_y,int f_Size)
//{
//	int Swap;
//	int i;
//
//	for (i = 0; i < f_Size; i++) {
//		Swap = *(f_x + i);
//		*(f_x + i) = *(f_y + i);
//		*(f_y + i) = Swap;
//	}
//}

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 8번
*/

//void rand_array(int* arr, int size, int num)
//{
//    int i;
//    for (i = 0; i < size; i++)
//        arr[i] = rand() % num;
//}
//
//void print_array(const int arr[], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//        printf("%2d ", arr[i]);
//    printf("\n");
//}
//
//int main(void)
//{
//    int data[10];
//
//    srand((unsigned int)time(NULL));
//
//    rand_array(data, 10, 100);
//    print_array(data, 10);
//}

/*2023. 02. 27
* 8 포인터. 배열
*  2.1)(책 p.315) 연습문제 1 10번
*/



void Print_Array(int* x, int f_Size)	//배열의 나열을 print출력 함수
{
	int i;

	for (i = 0; i < f_Size; i++) {
		printf("%d  ", x[i]);
	}
	printf("\n");
}

void Print_double_Array(double* x, double f_Size)	//배열의 나열을 print출력 함수
{
	int i;

	for (i = 0; i < f_Size; i++) {
		printf("%.2lf  ", x[i]);
	}
	printf("\n");
}