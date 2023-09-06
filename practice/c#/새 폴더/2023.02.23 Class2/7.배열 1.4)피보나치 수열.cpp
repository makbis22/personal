//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.4)피보나치 수열
*/

int main() {

	int arr[10] = { 1,1 };
	int i;

	printf("arr = ");

	for (i = 2; i < 10; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	for (i = 0; i < 10; i++) {
		printf("% d", arr[i]);
	}
	printf("\n");

	printf("arr[10] = %d\n", arr[10]);	//잘못된 인덱스 arr[0~9까지]

	return 0;
}