//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.269) �������� 2 3��
*/

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int i;
	int max = arr[0], min = arr[0];

	printf("�迭 :");	//�迭 ���� ����
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++) {	//�ִ� �ּҰ� ���ϱ�
		max = (max > arr[i]) ? max : arr[i];
		min = (min < arr[i]) ? min : arr[i];
	}

	printf("�ִ� �� : %d\n", max);
	printf("�ּ� �� : %d\n", min);
}