//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 5��
*/

void get_menu_select(int f_Num) {

	switch (f_Num)
	{
	case 1:
		printf("���� ���⸦ �����մϴ�.\n");
		break;
	case 2:
		printf("���� ������ �����մϴ�.\n");
		break;
	case 3:
		printf("���� �μ⸦ �����մϴ�.\n");
		break;
	case 0:
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		break;
	}
}

int main() {

	int Num = 1;

	while (Num > 0) {
		printf("[1.���� ����  2.���� ����  3.�μ�  0.����] ����? : ");
		scanf("%d", &Num);

		get_menu_select(Num);
		printf("\n");
	}
	return 0;
}