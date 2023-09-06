//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.1)배열의 크기 구하기
*/

int main(void) {

	int arr[5];
	int size = 0;
	int i;

	printf("배열 바이트 크기 : %d\n", sizeof(arr));

	size = sizeof(arr) / sizeof(arr[0]);

	printf("배열의 크기 : %d\n", size);

	for (i = 0; i < size; i++) {
		arr[i] = i;
	}

	for (i = 0; i < size; i++) {
		printf(" %d", arr[i]);
	}

	printf("\n");

	return 0;
}
