//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.7)값에 의한 호출로 구조체 전달하기
*/

struct point {
	int x, y;
};

void print_point(struct point pt);

int main()
{
	struct point arr[] = {
		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4,27}
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < size; i++) {
		print_point(arr[i]);
	}
	printf("\n");
}

void print_point(struct point pt)
{
	printf("(%d, %d) ",pt.x, pt.y);
}