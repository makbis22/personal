//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 1 (å)
* 1��
*/

int get_mult(int x, int y) {	//x:���� ���� ��, y: �󸶳� ������

	int i;
	int result = 1;

	for (i = 1; i <= y; i++) {	//x�� ����� ��� ���� for��
		result = x * i;
	}

	return result;
}

int main() {	//���� �Լ�

	int i;	//for�� ����
	int num;	//�Է� ���� ��
	int exit = 1;	//�������� ����

	while (exit > 0) {

		printf("����? :");
		scanf("%d", &num);

		if (num <= 0)	//�������� ���(�Է��� 0���Ϸ� ����)
			break;

		for (i = 1; i <= 20; i++) {
			printf("%d ", get_mult(num, i));
		}

		printf("\n");
	}

	return 0;
}