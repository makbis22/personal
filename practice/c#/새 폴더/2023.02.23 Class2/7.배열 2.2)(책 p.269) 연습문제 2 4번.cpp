//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.269) 연습문제 2 4번
*/

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int i;
	int serch;
	int min;

	printf("배열 :");	//배열 내용 나열
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("찾을 값?");
	scanf("%d", &serch);


	for (i = 9; i >= 0; i--) {	//뒤에서 부터 찾는다
		if (serch == arr[i]) {
			break;
		}
	}
	printf("%d는 %d번째 원소입니다.\n", serch, i);

	return 0;
}