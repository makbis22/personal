//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. ����ü
*  3.1)(å) �������� 5��
*/

struct product {
	char menu[20];
	int price;
	int lot;
};

int main()
{
	struct product p1 = {};

	printf("��ǰ��? ");
	scanf("%s", p1.menu);
	printf("����? ");
	scanf("%d", &p1.price);
	printf("���? ");
	scanf("%d", &p1.lot);

	printf("[%s %�� ���: %d]", p1.menu, p1.price, p1.lot);
}