//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.267) �������� 1
*  11��
*/

int main()
{
	int gugu[9][9] = { 0 };
	int i, j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			gugu[i - 1][j - 1] = i * j;		//gugu[0][0] ���� ���� �Ǳ� ���� (i=1,j=1���� ����)
		}
	}
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d * %d = %2d  ", i, j, gugu[i - 1][j - 1]);
		}
		printf("\n");
	}
}