//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.1)�������� ������ ���� ������
*/

int main(void)
{
	int stock1 = 10, stock2 = 10;
	int current;

	current = --stock1;
	printf("current = %d, stock1 = %d\n", current, stock1);
	
	current = stock2--;
	printf("current = %d, stock2 = %d\n", current, stock2);
}