//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  1.4)get_area �Լ�(���� ���� ���)
*/

double get_area(double radius) {

	const double pi = 3.14;
	return pi * radius * radius;
}

int main() {

	int r; //����

	for (r = 1; r <= 5; r++) {		//������ 1���� 5���� ���
		printf("r=%d, ���� ���� = %.2f\n", r, get_area(r)); //r�� double������ ��ȯ�ؼ� ����
	}
}