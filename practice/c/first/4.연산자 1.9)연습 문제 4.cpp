//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.9)���� ���� 4
*/

/*5. ȭ�� �µ�(F)�� �Ǽ��� �Է¹޾� �����µ�(C)�� ��ȯ�ؼ� 
	����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
int main(void)
{
	int F;
	double C;

	printf("ȭ�� �µ�? :");
	scanf("%d", &F);

	C = ((double)F - 32) * 5 / 9;

	printf("%d F = %.2f C", F, C);
}