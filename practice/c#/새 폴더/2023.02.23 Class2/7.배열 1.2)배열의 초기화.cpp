//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  1.2)�迭�� �ʱ�ȭ
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
	size = sizeof(z) / sizeof(z[0]);	//�迭�� size�� ���ϱ�����
	for (i = 0; i < size; i++) {	//�� size�� �̿��� �迭ũ�� ��ŭ�� �迭 ���� ã��
		printf("%3d", z[i]);
	}
	printf("\n");
}