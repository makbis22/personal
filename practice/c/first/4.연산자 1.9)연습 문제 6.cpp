//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.9)���� ���� 6
*/

/*11. 24��Ʈ Ʈ���÷��� ��Ÿ����```*/
int main(void)
{
	unsigned int red, green, blue = 0;
	unsigned int mask = 0xff;
	unsigned int RGB = 0;

	printf("red ? ");
	scanf("%d", &red);
	red &= mask;

	printf("green ? ");
	scanf("%d", &green);
	green &= mask;

	printf("blue ? ");
	scanf("%d", &blue);
	blue &= mask;

	RGB = red | (green << 8) | (blue << 16);
	printf("RGB ���� : %06x", RGB);
}