//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.9)���� ���� 2
*/

/*3.�⺻ ��ݰ� �� ��뷮(kWh)�� �Է¹޾� �������� �Ի��ϴ� ���α׷��� �ۼ��Ͻÿ�.
	��뷮�� ���� ����� 190��/hWh�̴�.*/
int main(void)
{
	int Month_W;
	int Basic_Money;
	int Money;
	int kwh = 190;

	printf("�⺻ ���? : ");
	scanf("%d", &Basic_Money);
	printf("�� ��뷮(kWh)�� �Է����ּ���. : ");
	scanf("%d", &Month_W);

	Money = Basic_Money + Month_W * kwh;
	printf("���� ��� : %d\n", Money);
}