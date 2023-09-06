//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 6번
*/

int main()
{
	int x[20] = {};
	int i;
	int num;
	int size;

	printf("배열의 원소에 저장할 값?");
	scanf("%d", &num);

	size = sizeof(x) / sizeof(x[0]);

	for (i = 0; i < size; i++) {	//배열에 원소 값 저장
		x[i] = num;
	}

	for (i = 0; i < size; i++) {	//원소값 나열
		printf("%d ", x[i]);
	}
	return 0;
}