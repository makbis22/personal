//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. ����ü
*  1.3)����ü ������ ��
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

	if (strcmp(c1.title, c2.title) == 0 && c1.price == c2.price && c1.rate == c2.rate) {
		printf("c1�� c2�� ���� �����ϴ�.\n");
	}
	else {
		printf("c1�� c2�� ���� �ٸ��ϴ�.\n");
	}
}