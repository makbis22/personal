//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 8��
*/

int main()
{
	int x[5] = {};
	int dis;
	int i;
	int size;
	int price = 0, result = 0;

	size = sizeof(x) / sizeof(x[0]);

	printf("��ǰ�� 5���� �Է��ϼ���");
	for (i = 0; i < size; i++) {	//5�� �Է� �޴� ����
		scanf("%d", &x[i]);
	}
	printf("������(%)");
	scanf("%d", &dis);

	for (i = 0; i < size; i++) {	//���ݰ� ���ΰ� ���
		price = x[i];
		result = x[i] * ((100 - (double)dis) / 100);
		printf("����:%3d --> ���ΰ�: %3d\n", price, result);
	}
	return 0;
}