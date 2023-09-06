//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 6번
*/

int get_red(int f_RGB) {	//RGB에서 Red값 추출 함수

	int Mask = 0xff;
	int Result = 0;

	Result = f_RGB & Mask;

	return Result;
}

int get_green(int f_RGB) {	//RGB에서 green값 추출 함수

	int Mask = 0xff;
	int Result = 0;

	Result = (f_RGB >> 8) & Mask;

	return Result;
}

int get_blue(int f_RGB) {	//RGB에서 blue값 추출 함수

	int Mask = 0xff;
	int Result = 0;

	Result = (f_RGB >> 16) & Mask;

	return Result;
}

int main(void)
{

	unsigned int RGB;

	printf("RGB 색상? : ");
	scanf("%x", &RGB);

	printf("RGB %06x의 red : %d, green : %d, blue : %d\n", RGB, get_red(RGB),
		get_green(RGB), get_blue(RGB));

	return 0;

}