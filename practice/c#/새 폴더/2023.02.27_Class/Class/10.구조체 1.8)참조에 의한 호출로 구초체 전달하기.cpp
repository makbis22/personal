//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.8)참조에 의한 호출로 구초체 전달하기
*/

struct point {
	int x, y;
};

void print_point(struct point* ptr);
void move_point(struct point* ptr, int offset);

int main()
{
	struct point arr[] = {
		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4,27}
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	int i, offset;

	for (i = 0; i < size; i++) {
		print_point(&arr[i]);
	}
	printf("\n");

	printf("이동할 오프셋? ");
	scanf("%d", &offset);

	for (i = 0; i < size; i++) {
		move_point(&arr[i], offset);
		print_point(&arr[i]);
	}
}

void print_point(struct point* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}

void move_point(struct point* ptr, int offset)
{
	ptr->x = ptr->x + offset;
	ptr->y = ptr->y + offset;
}