//2023.02.24 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 1��
*/

int main()
{
	double x[10] = { 0.1, 2, 3.4, 4.5, 7, 9.7, 7.8, 1.4, 6.6, 7.2 };
	double* p = x;
	int i;
	int Size = sizeof(x) / sizeof(x[0]);

	for (i = 0; i < Size; i++) {
		printf("%.2lf  ", *(p + i));
	}
}
