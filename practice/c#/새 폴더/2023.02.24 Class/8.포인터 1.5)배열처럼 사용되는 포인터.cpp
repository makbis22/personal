//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. ������
*  1.5)�迭ó�� ���Ǵ� ������
*/

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	int i;

	for (i = 0; i < 5; i++) {
		printf("p[%d] = %d\n", i, *(p+i);
	}
}