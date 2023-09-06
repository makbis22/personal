//first.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 3. 데이터형과 변수
*  1.2)입력된 문자의 ASCII코드 출력
*/

int main(void)
{
	char ch, prev_ch, next_ch;

	printf("문자?");
	scanf("%c", &ch);

	prev_ch = ch - 1;
	next_ch = ch + 1;

	printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch);
	printf("ch		= %c, %d, %#02x\n", ch, ch, ch);
	printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch);

	return 0;
}