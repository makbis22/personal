//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.9)���� ���� 5
*/

/*7. ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ�
	���α׷��� �ۼ��Ͻÿ�.*/
int main(void)
{
	int a, b;
	double result;

	printf("��� ? ");
	scanf("%d", &a);

	printf("���� ? ");
	scanf("%d", &b);

	result = (b / (double)(a + b)) * 100;

	printf("�� : %.2f", result);
}