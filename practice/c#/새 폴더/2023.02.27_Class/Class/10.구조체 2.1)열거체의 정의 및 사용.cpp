//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  2.1)열거체의 정의 및 사용
*/

enum direction { north, south, east, west };

int main()
{
	enum direction moves[] = {
		north, north, east, south, south, west
	};
	int size = sizeof(moves) / sizeof(moves[0]);
	int i;

	printf("이동 순서 : ");
	for (i = 0; i < size; i++) {
		switch (moves[i]) {
		case north:
			printf("북 ");
			break;
		case south:
			printf("남 ");
			break;
		case east:
			printf("동 ");
			break;
		case west:
			printf("서 ");
			break;
		}
	}
	printf("\n");
}