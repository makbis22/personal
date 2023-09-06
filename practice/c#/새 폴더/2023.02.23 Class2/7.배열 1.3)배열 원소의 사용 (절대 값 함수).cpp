//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.3)배열 원소의 사용 (절대 값 함수)
*/

unsigned int absolute(int x) {

	return x > 0 ? x : -x;
}

int main() {

	int x[5] = { -4,0,28,3,-12 };
	unsigned int y[ARR_SIZE] = { 0 };
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		y[i] = absolute(x[i]);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		printf("% d", y[i]);
	}
	printf("\n");
}
