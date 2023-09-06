//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  2.3)typedef의 정의 및 사용
*/

typedef struct point {
	int x, y;
}point_t;

void print_point(const point_t* ptr);

int main()
{
	point_t pt1 = { 10, 20 };
	print_point(&pt1);
}

void print_point(const point_t* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}