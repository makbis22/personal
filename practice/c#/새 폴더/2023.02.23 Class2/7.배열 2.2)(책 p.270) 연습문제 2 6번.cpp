//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 6��
*/

int main()
{
	int x[20] = {};
	int i;
	int num;
	int size;

	printf("�迭�� ���ҿ� ������ ��?");
	scanf("%d", &num);

	size = sizeof(x) / sizeof(x[0]);

	for (i = 0; i < size; i++) {	//�迭�� ���� �� ����
		x[i] = num;
	}

	for (i = 0; i < size; i++) {	//���Ұ� ����
		printf("%d ", x[i]);
	}
	return 0;
}