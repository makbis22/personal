//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.8)2차원 배열의 초기화
*/

int main()
{
	int data[][2] = {
		{10,20}, {30,40}, {50,60}
	};
	int row_size = sizeof(data) / sizeof(data[0]);	//24byte / 8byte (data[0] = {x,y})
	int i, j;

	for (i = 0; i < row_size; i++) {
		for (j = 0; j < 2; j++) {
			printf("%3d ", data[i][j]);
		}
		printf("\n");
	}

}