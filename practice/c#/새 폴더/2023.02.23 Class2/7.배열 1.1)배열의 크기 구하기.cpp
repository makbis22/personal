//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  1.1)�迭�� ũ�� ���ϱ�
*/

int main(void) {

	int arr[5];
	int size = 0;
	int i;

	printf("�迭 ����Ʈ ũ�� : %d\n", sizeof(arr));

	size = sizeof(arr) / sizeof(arr[0]);

	printf("�迭�� ũ�� : %d\n", size);

	for (i = 0; i < size; i++) {
		arr[i] = i;
	}

	for (i = 0; i < size; i++) {
		printf(" %d", arr[i]);
	}

	printf("\n");

	return 0;
}
