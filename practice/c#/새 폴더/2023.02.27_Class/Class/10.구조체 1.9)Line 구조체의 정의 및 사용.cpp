//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.9)Line 구조체의 정의 및 사용
*/

void print_point(struct point* ptr);
double get_length(struct line* ptr);

struct point {
	int x, y;
};
struct line {
	struct point start, end;
};
int main()
{
	struct line ln1 = {
		{10, 20}, {30, 40}
	};

	printf("직선 정보 : ");
	print_point(&ln1.start);
	print_point(&ln1.end);
	printf("\n길이: %f\n", get_length(&ln1));
}

void print_point(struct point* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}

double get_length(struct line* ptr)
{
	int dx = ptr->end.x - ptr->start.x;
	int dy = ptr->end.y - ptr->start.y;

	return sqrt(dx * dx + dy * dy);
}