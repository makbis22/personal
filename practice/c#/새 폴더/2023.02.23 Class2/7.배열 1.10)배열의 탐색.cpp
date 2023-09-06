//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.10)배열의 탐색
*/

void print_array(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++) {
		printf(" %d", arr[i]);
	}
	printf("\n");
}

int main()
{
	int data[] = { 12,34,51,22,91,12,15 };
	int size, i;
	int key;

	size = sizeof(data) / sizeof(data[0]);

	printf("data = ");
	print_array(data, size);

	printf("찾을 값(키)?");
	scanf("%d", &key);

	for (i = 0; i < size; i++) {
		if (data[i] == key) {
			printf("찾은 원소의 인덱스 : %d\n", i);
		}
	}
	return 0;
}