//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.269) 연습문제 2 1번
*/

int main()
{
	int First[10] = {};
	int x;
	int i;

	printf("첫 번째 항?");
	scanf("%d", &First[0]);

	printf("공차?");
	scanf("%d", &x);

	for (i = 1; i < 10; i++) {
		First[i] = First[i - 1] + x;
	}

	for (i = 0; i < 10; i++) {
		printf(" %d", First[i]);
	}
}