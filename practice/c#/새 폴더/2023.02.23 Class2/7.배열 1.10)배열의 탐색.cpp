//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  1.10)�迭�� Ž��
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

	printf("ã�� ��(Ű)?");
	scanf("%d", &key);

	for (i = 0; i < size; i++) {
		if (data[i] == key) {
			printf("ã�� ������ �ε��� : %d\n", i);
		}
	}
	return 0;
}