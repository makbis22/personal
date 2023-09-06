//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.5)배열의 복사
*/

int main(void) {

	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 0 };
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		y[i] = x[i];
	}
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%d ", y[i]);
	}
	printf("\n");

	return 0;
}