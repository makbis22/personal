//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 2번
*/

int get_width_length(int x, int y) {

	int result = 0;

	result = (x * 2) + (y * 2);

	return result;
}

int main() {

	int width, length;

	printf("가로 ?");
	scanf("%d", &width);
	printf("세로 ?");
	scanf("%d", &length);

	printf("직사각형의 둘레 : %d", get_width_length(width, length));
}