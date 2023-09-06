//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.268) 연습문제 1
*  12번
*/

int main()
{
	int x[4][3] = { { 1, 2, 3 }, { 4,5 }, { 6 } };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			x[3][j] += x[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%2d", x[i][j]);
		}
		printf("\n");
	}
}