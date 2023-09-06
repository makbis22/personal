//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.9)배열의 출력
*/

void print_array(int arr[], int size);

int main()
{
	int data[3] = { 10,20,30 };
	int x[] = { 1,2,3,4,5 };
	int size = sizeof(x) / sizeof(x[0]);

	printf("data = ");
	print_array(data, 3);

	printf("x = ");
	print_array(x, size);

	printf("x = ");
	print_array(x, 3);

	return 0;
}

void print_array(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}