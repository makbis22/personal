//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  1.4)�Ǻ���ġ ����
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

	printf("arr[10] = %d\n", arr[10]);	//�߸��� �ε��� arr[0~9����]

	return 0;
}