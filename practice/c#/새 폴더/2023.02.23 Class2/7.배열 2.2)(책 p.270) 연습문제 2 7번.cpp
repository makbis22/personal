//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 7��
*/

int main()
{
	float num[5] = {};
	int i;
	int size;
	float sum = 0;

	size = sizeof(num) / sizeof(num[0]);

	printf("�Ǽ� 5���� �Է��ϼ���");
	for (i = 0; i < size; i++) {	//�Ǽ� 5�� �Է� �޴� ����
		scanf("%f", &num[i]);
	}

	for (i = 0; i < size; i++) {
		sum += num[i];
	}
	printf("�հ� : %f", sum);

	return 0;
}