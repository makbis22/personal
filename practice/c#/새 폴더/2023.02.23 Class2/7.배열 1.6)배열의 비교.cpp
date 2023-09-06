//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.6)배열의 비교
*/

int main(void) {

	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 10,20,30,40,50 };
	int i;
	int is_equal;	//같은 배열인지 나타내는 변수

	if (x == y) {
		printf("두 배열의 주소가 같습니다.\n");
	}
	else {
		printf("두 배열의 주소가 다릅니다.\n");
	}

	is_equal = 1;

	for (i = 0; i < ARR_SIZE; i++) {
		if (x[i] != y[i]) {
			is_equal = 0;
			break;
		}
	}

	if (is_equal == 1) {
		printf("두 배열의 내용이 같습니다.\n");
	}
	else {
		printf("두 배열의 내용이 다릅니다\n");
	}

	return 0;
}