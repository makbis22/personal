//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.269) �������� 2 1��
*/

int main()
{
	int First[10] = {};
	int x;
	int i;

	printf("ù ��° ��?");
	scanf("%d", &First[0]);

	printf("����?");
	scanf("%d", &x);

	for (i = 1; i < 10; i++) {
		First[i] = First[i - 1] + x;
	}

	for (i = 0; i < 10; i++) {
		printf(" %d", First[i]);
	}
}