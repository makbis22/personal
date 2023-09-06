//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.2)구조체 변수 간의 초기화와 대입
*/

struct content {
	char title[40];
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "Avengers", 11000, 8.8 };
	struct content c2 = c1;
	struct content c3 = { 0 };

	c3 = c1;

	printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);
	printf("c1 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);
	printf("c1 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate);
}