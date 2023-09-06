//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  1.5)구조체 배열의 검색
*/

struct content {
	char title[40];
	int price;
	double rate;
};

int main()
{
	struct content arr[] = {
		{ "Avengers", 11000, 8.8 }, { "Aquaman", 5500, 7.7 }, { "Shazam", 7700, 7.4 },
		{ "X-men", 3300, 8.0 }, { "Us", 8800, 7.1 }, { "Inception", 2200, 8.7 }
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	char title[40];

	printf("제목? : ");
	scanf("%s", title);

	for (i = 0; i < size; i++) {
		if (strcmp(arr[i].title, title) == 0) {
			break;
		}
	}
	if (i == size) {
		printf("해당 콘텐츠를 찾을 수 없읍니다.\n");
	}
	else
		printf("%s : 가격 = %d, 평점 = %.1f\n", arr[i].title, arr[i].price, arr[i].rate);
}