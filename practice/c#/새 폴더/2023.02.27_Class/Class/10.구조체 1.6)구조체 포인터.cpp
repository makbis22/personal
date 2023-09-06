//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.6)구조체 포인터
*/

struct content {
	char title[40];
	int price;
	double rate;
};

int main()
{
	struct content c1 = { "Avengers", 11000, 8.8 };
	struct content* p = &c1;

	p->price *= 0.8;
	p->rate = 8.9;
	strcat(p->title, ": Endgame");

	printf("%s, %d, %.1f\n", p->title, p->price, p->rate);
}