//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.9)���� ���� 3
*/

/*8. �������� ��� �ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ�
	���α׷��� �ۼ��Ͻÿ�.*/
int main(void)
{
	int Play_Sec = 0;
	int Hour, Min, Sec;

	printf("��� �ð�(��)? :");
	scanf("%d", &Play_Sec);

	Hour = Play_Sec / 60 / 60;
	Min = (Play_Sec / 60) % 60;
	Sec = Play_Sec % 60;

	printf("��� �ð��� %d�ð� %d�� %d�� �Դϴ�.", Hour, Min, Sec);
}