//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  1.4)get_area 함수(원의 면적 계산)
*/

double get_area(double radius) {

	const double pi = 3.14;
	return pi * radius * radius;
}

int main() {

	int r; //지름

	for (r = 1; r <= 5; r++) {		//면적을 1에서 5까지 출력
		printf("r=%d, 원의 면적 = %.2f\n", r, get_area(r)); //r을 double형으로 변환해서 전달
	}
}