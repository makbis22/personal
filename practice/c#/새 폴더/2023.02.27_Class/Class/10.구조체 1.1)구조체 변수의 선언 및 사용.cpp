//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.1)구조체 변수의 선언 및 사용
*/

struct content {
	char title[40];
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "Avengers", 11000, 8.8 };
	struct content c2, c3;

	strcpy(c2.title, "Aquaman");
	c2.price = 5500;
	c2.rate = 7.1;

	strcpy(c3.title, "Shazam");
	c3.price = 7700;
	c3.rate = 7.4;

	printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);
	printf("c1 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);
	printf("c1 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate);

}