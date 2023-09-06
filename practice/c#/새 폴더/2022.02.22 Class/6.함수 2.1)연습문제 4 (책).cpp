//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 4번
*/

//할인율과 가격인자를 받아 계산하는 함수
int get_discount_price(int f_Discount, int f_Price) {

	int result = 0;

	result = f_Price * (1 - ((double)f_Discount / 100));

	return result;
}

int main() {

	int Discount;
	int Price = 1;	//while문을 돌리기 위해 1로 초기화

	while (Price > 0) {	//가격이 0일 때 빠져나옴
		printf("할인율(%)? :");
		scanf("%d", &Discount);

		printf("제품의 가격? :");
		scanf("%d", &Price);

		printf("할인가? : %d", get_discount_price(Discount, Price));
		printf("\n");
	}
	return 0;
}