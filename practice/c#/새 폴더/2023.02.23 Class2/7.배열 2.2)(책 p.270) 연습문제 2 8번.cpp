//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 8번
*/

int main()
{
	int x[5] = {};
	int dis;
	int i;
	int size;
	int price = 0, result = 0;

	size = sizeof(x) / sizeof(x[0]);

	printf("상품가 5개를 입력하세요");
	for (i = 0; i < size; i++) {	//5개 입력 받는 구문
		scanf("%d", &x[i]);
	}
	printf("할인율(%)");
	scanf("%d", &dis);

	for (i = 0; i < size; i++) {	//가격과 할인가 출력
		price = x[i];
		result = x[i] * ((100 - (double)dis) / 100);
		printf("가격:%3d --> 할인가: %3d\n", price, result);
	}
	return 0;
}