//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 3��
*/

//���� �������� �Ÿ� ��� �Լ�
double get_straight_length(double x1, double y1, double x2, double y2) {	//��ǥ �� ���� 4���� ����

	double result = 0;

	result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	return result;
}
int main() {

	int x1, y1;
	int x2, y2;

	printf("������ ������ ��ǥ? :");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ? :");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) ������ ���� : %.2lf", x1, y1, x2, y2,
		get_straight_length(x1, y1, x2, y2));

	return 0;
}