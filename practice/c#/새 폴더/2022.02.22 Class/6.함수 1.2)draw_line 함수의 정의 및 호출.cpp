//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  1.2)draw_line 함수의 정의 및 호출
*/

void draw_line(char ch, int len) {

	int i;

	for (i = 0; i < len; i++) {
		printf("%c", ch);
	}
	printf("\n");
}

int main(void) {

	int amount = 10, price = 1000;
	int total = 0, width = 0;

	draw_line('=', 24);

	printf("수량 단가 합계\n");
	width = 3 + 8 + 8 + 2;
	draw_line('-', width);
	total = amount * price;
	printf("%3d %8d %8d\n", amount, price, total);

	draw_line('=', 24);
}