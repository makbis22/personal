//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 4��
*/

//�������� �������ڸ� �޾� ����ϴ� �Լ�
int get_discount_price(int f_Discount, int f_Price) {

	int result = 0;

	result = f_Price * (1 - ((double)f_Discount / 100));

	return result;
}

int main() {

	int Discount;
	int Price = 1;	//while���� ������ ���� 1�� �ʱ�ȭ

	while (Price > 0) {	//������ 0�� �� ��������
		printf("������(%)? :");
		scanf("%d", &Discount);

		printf("��ǰ�� ����? :");
		scanf("%d", &Price);

		printf("���ΰ�? : %d", get_discount_price(Discount, Price));
		printf("\n");
	}
	return 0;
}