//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.7)2차원 배열의 선언 및 사용
*/

int main()
{
	int data[3][2];
	int i, j, k;

	for (i = 0, k = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			data[i][j] = ++k;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d", data[i][j]);
		}
		printf("\n");
	}
	printf("sizeof(data)		=%d\n", sizeof(data));
	printf("sizeof(data[0])		=%d\n", sizeof(data[0]));
	printf("sizeof(data[0][0])	=%d\n", sizeof(data[0][0]));

	return 0;
}