//first.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 3. ���������� ����
*  1.2)�Էµ� ������ ASCII�ڵ� ���
*/

int main(void)
{
	char ch, prev_ch, next_ch;

	printf("����?");
	scanf("%c", &ch);

	prev_ch = ch - 1;
	next_ch = ch + 1;

	printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch);
	printf("ch		= %c, %d, %#02x\n", ch, ch, ch);
	printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch);

	return 0;
}