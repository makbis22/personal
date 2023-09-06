//first.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 3. 데이터형과 변수
*  1.1)데이터형의 바이트 크기
*/

int main(void)
{
	printf("char의 크기 : %d\n,", sizeof(char));
	printf("char의 크기 : %d\n,", sizeof(short));
	printf("char의 크기 : %d\n,", sizeof(int));
	printf("char의 크기 : %d\n,", sizeof(float));
	printf("char의 크기 : %d\n,", sizeof(double));

	return 0;
}