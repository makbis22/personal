//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. ����ü
*  2.1)����ü�� ���� �� ���
*/

enum direction { north, south, east, west };

int main()
{
	enum direction moves[] = {
		north, north, east, south, south, west
	};
	int size = sizeof(moves) / sizeof(moves[0]);
	int i;

	printf("�̵� ���� : ");
	for (i = 0; i < size; i++) {
		switch (moves[i]) {
		case north:
			printf("�� ");
			break;
		case south:
			printf("�� ");
			break;
		case east:
			printf("�� ");
			break;
		case west:
			printf("�� ");
			break;
		}
	}
	printf("\n");
}