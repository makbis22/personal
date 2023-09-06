//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.4)구조체 배열의 사용
*/

struct content {
	char title[40];
	int price;
	double rate;
};

int main()
{
	struct content arr[] = {
		{"Averners", 11000, 8.8},
		{ "Aquaman",5500,7.1 },
		{ "Shazam",7700,7.4 }
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < size; i++) {
		printf("arr[%d] = %s, %d, %.1f\n", i, arr[i].title, arr[i].price, arr[i].rate);
	}
}