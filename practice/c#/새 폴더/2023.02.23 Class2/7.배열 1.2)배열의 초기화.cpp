//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.2)배열의 초기화
*/

int main() {

	int arr[ARR_SIZE] = { 1,2,3,4,5 };
	int x[ARR_SIZE] = { 1,2,3 };
	int y[ARR_SIZE] = { 0 };
	int z[] = { -1,0,1 };
	int i, size;

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");

	printf("x	=");
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%3d", x[i]);
	}
	printf("\n");

	printf("y	=");
	for (i = 0; i < ARR_SIZE; i++) {
		printf("%3d", y[i]);
	}
	printf("\n");

	printf("z	=");
	size = sizeof(z) / sizeof(z[0]);	//배열의 size를 구하기위해
	for (i = 0; i < size; i++) {	//위 size를 이용해 배열크기 만큼의 배열 내용 찾음
		printf("%3d", z[i]);
	}
	printf("\n");
}