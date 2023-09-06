//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  1.1)리턴 값과 매개 변수가 없는 함수
*/

void hi(void) {

	printf("Hi! Hellow, 안녕\n");
}

void bye() { printf("Bye!\n"); }

int main(void) {

	hi();
	bye();
	hi();
	bye();
}