//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 7��
*/

void get_leap_year(int f_Year) {	//���� ����

	if ((f_Year % 4 == 0) && ((f_Year % 100 != 0) || (f_Year % 400 == 0)))
		printf("%d ", f_Year);
	else
		printf("");
}

int main() {

	int Year;
	int i;

	for (i = 2000; i <= 2100; i++) {	//2000���� 2100����� ���� ���ϱ�
		get_leap_year(i);
	}

	return 0;
}