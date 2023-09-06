//2023.02.23 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 6. �Լ�
*  2.1)�������� 2 (å)
* 8��
*/

int get_date_true(int f_Year, int f_Month, int f_Day) {

	int result = 1;

	if (f_Year <= 0)	//������ 0���ϸ� �ȴ�
		result = 0;

	if (f_Month == 2) {	//���� 2���̸� 28�� ������
		if (f_Day < 0 || f_Day > 28)
			result = 0;
	}
	else if (f_Month == 4 || f_Month == 6 || f_Month == 9 || f_Month == 10) {	//30���� ��
		if (f_Day < 0 || f_Day > 30)
			result = 0;
	}
	if (f_Month > 12 || f_Month <= 0)	//������ ���� 1~12
		result = 0;

	if (f_Day > 31 || f_Day <= 0)	//������ ���� �ϼ��� 1~31
		result = 0;

	return result;
}

int main() {

	int Year, Month, Day;
	int True = 0;

	while (True == 0) {
		printf("��¥ (�� �� ��)? :");
		scanf("%d %d %d", &Year, &Month, &Day);

		if (get_date_true(Year, Month, Day) == 0)
			printf("�߸� �Է� �ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���");

		else if (get_date_true(Year, Month, Day) == 1) {
			printf("�Է��� ��¥�� %d�� %d�� %d�� �Դϴ�.", Year, Month, Day);
			True = 1;
		}

		printf("\n");
	}
}