//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.269) �������� 2 4��
*/

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int i;
	int serch;
	int min;

	printf("�迭 :");	//�迭 ���� ����
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("ã�� ��?");
	scanf("%d", &serch);


	for (i = 9; i >= 0; i--) {	//�ڿ��� ���� ã�´�
		if (serch == arr[i]) {
			break;
		}
	}
	printf("%d�� %d��° �����Դϴ�.\n", serch, i);

	return 0;
}