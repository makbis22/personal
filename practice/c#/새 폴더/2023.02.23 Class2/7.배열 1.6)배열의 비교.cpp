//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  1.6)�迭�� ��
*/

int main(void) {

	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 10,20,30,40,50 };
	int i;
	int is_equal;	//���� �迭���� ��Ÿ���� ����

	if (x == y) {
		printf("�� �迭�� �ּҰ� �����ϴ�.\n");
	}
	else {
		printf("�� �迭�� �ּҰ� �ٸ��ϴ�.\n");
	}

	is_equal = 1;

	for (i = 0; i < ARR_SIZE; i++) {
		if (x[i] != y[i]) {
			is_equal = 0;
			break;
		}
	}

	if (is_equal == 1) {
		printf("�� �迭�� ������ �����ϴ�.\n");
	}
	else {
		printf("�� �迭�� ������ �ٸ��ϴ�\n");
	}

	return 0;
}