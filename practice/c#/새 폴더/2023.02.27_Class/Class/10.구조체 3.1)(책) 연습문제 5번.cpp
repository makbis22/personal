//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 5번
*/

struct product {
	char menu[20];
	int price;
	int lot;
};

int main()
{
	struct product p1 = {};

	printf("제품명? ");
	scanf("%s", p1.menu);
	printf("가격? ");
	scanf("%d", &p1.price);
	printf("재고? ");
	scanf("%d", &p1.lot);

	printf("[%s %원 재고: %d]", p1.menu, p1.price, p1.lot);
}