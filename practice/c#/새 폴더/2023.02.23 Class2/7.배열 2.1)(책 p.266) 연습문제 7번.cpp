//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.1)(å p.266) �������� 1
*  7��
*/

int main()
{
	double values[] = { 0.5, 0.125, 0.75, 1.05, 2.25, 3.75 };
	int count = sizeof(values) / sizeof(values[0]);
	int i;
	
	for (i = 0; i < count; i++) {
		printf(" %.3f", values[i]);
	}
	return 0;
}