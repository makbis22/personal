//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.267) �������� 1
*  8��
*/

int main(void)
{
	int orders[] = { 3, 5, 1, 2, 2, 4, 3, 1, 1, 2 };
	int sz = sizeof(orders) / sizeof(orders[0]);
	int sum = 0;
	int i;
	for (i = 0; i < sz; i++) {
		sum += orders[i];
	}
	printf("�հ� : %d\n", sum);
}