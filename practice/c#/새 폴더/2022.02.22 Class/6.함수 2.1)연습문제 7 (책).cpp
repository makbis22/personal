//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 7번
*/

void get_leap_year(int f_Year) {	//윤년 추출

	if ((f_Year % 4 == 0) && ((f_Year % 100 != 0) || (f_Year % 400 == 0)))
		printf("%d ", f_Year);
	else
		printf("");
}

int main() {

	int Year;
	int i;

	for (i = 2000; i <= 2100; i++) {	//2000부터 2100년까지 윤년 구하기
		get_leap_year(i);
	}

	return 0;
}