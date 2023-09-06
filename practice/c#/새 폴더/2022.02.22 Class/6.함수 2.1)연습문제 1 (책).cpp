//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 1 (책)
* 1번
*/

int get_mult(int x, int y) {	//x:곱할 정수 값, y: 얼마나 곱할지

	int i;
	int result = 1;

	for (i = 1; i <= y; i++) {	//x의 배수를 얻기 위한 for문
		result = x * i;
	}

	return result;
}

int main() {	//메인 함수

	int i;	//for문 인자
	int num;	//입력 받을 값
	int exit = 1;	//빠져나올 변수

	while (exit > 0) {

		printf("정수? :");
		scanf("%d", &num);

		if (num <= 0)	//빠져나올 방법(입력을 0이하로 받음)
			break;

		for (i = 1; i <= 20; i++) {
			printf("%d ", get_mult(num, i));
		}

		printf("\n");
	}

	return 0;
}