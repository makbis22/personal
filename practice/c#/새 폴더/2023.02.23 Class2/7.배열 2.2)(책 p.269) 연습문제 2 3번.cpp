//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.269) 연습문제 2 3번
*/

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int i;
	int max = arr[0], min = arr[0];

	printf("배열 :");	//배열 내용 나열
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++) {	//최대 최소값 구하기
		max = (max > arr[i]) ? max : arr[i];
		min = (min < arr[i]) ? min : arr[i];
	}

	printf("최대 값 : %d\n", max);
	printf("최소 값 : %d\n", min);
}