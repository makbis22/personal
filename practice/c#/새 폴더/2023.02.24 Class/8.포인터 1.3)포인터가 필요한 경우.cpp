//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. ������
*  1.3)�����Ͱ� �ʿ��� ���
*/

void test1(int x)
{
	x = 20;
}

void test2(int* p)
{
	*p = 20;
}

int main()
{
	int x = 10;
	test1(x);
	printf("test1 ȣ�� �� x = %d\n", x);		//x�� �� �������� ����

	test2(&x);
	printf("test2 ȣ�� �� x = %d\n", x);		//x�� �� ����(���� �ּҷ� ã�ư� �����ϱ� ����)
}
