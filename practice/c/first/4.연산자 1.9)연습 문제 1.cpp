//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.8)���� ���� 1
*/

/*2.�� ��뷮(kWh)�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	��뷮�� ���� ����� 190��/hWh�̴�.*/
int main(void)
{
	int Month_W = 0;
	int Money;
	int kwh = 190;

	printf("�� ��뷮(kWh)�� �Է����ּ���. : ");
	scanf("%d", &Month_W);

	Money = Month_W * kwh;
	printf("���� ��� : %d\n", Money);
}