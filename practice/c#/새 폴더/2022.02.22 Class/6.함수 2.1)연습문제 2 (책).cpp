//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 2��
*/

int get_width_length(int x, int y) {

	int result = 0;

	result = (x * 2) + (y * 2);

	return result;
}

int main() {

	int width, length;

	printf("���� ?");
	scanf("%d", &width);
	printf("���� ?");
	scanf("%d", &length);

	printf("���簢���� �ѷ� : %d", get_width_length(width, length));
}