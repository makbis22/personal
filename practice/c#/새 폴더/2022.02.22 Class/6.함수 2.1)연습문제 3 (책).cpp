//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 3번
*/

//점과 점사이의 거리 계산 함수
double get_straight_length(double x1, double y1, double x2, double y2) {	//좌표 값 인자 4개를 받음

	double result = 0;

	result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	return result;
}
int main() {

	int x1, y1;
	int x2, y2;

	printf("직선의 시작점 좌표? :");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표? :");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이 : %.2lf", x1, y1, x2, y2,
		get_straight_length(x1, y1, x2, y2));

	return 0;
}