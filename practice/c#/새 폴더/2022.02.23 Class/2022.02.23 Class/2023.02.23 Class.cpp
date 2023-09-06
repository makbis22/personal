//2023.02.23 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>

/*2023. 02. 23
* 6. 함수
*  2.1)연습문제 2 (책)
* 7번
*/

//void get_leap_year(int f_Year) {	//윤년 추출
//
//	if ((f_Year % 4 == 0) && ((f_Year % 100 != 0) || (f_Year % 400 == 0)))
//		printf("%d ", f_Year);
//	else
//		printf("");
//}
//
//int main() {
//
//	int Year;
//	int i;
//
//	for (i = 2000; i <= 2100; i++) {	//2000부터 2100년까지 윤년 구하기
//		get_leap_year(i);
//	}
//
//	return 0;
//}

/*2023. 02. 23
* 6. 함수
*  2.1)연습문제 2 (책)
* 8번
*/

//int get_date_true(int f_Year, int f_Month, int f_Day) {
//
//	int result = 1;
//	
//	if (f_Year <= 0)	//연도가 0이하면 안댐
//		result = 0;
//
//	if (f_Month == 2) {	//월이 2월이면 28일 까지만
//		if (f_Day < 0 || f_Day > 28)
//			result = 0;
//	}
//	else if (f_Month == 4 || f_Month == 6 || f_Month == 9 || f_Month == 10) {	//30일인 달
//		if (f_Day < 0 || f_Day > 30)
//			result = 0;
//	}
//	if (f_Month > 12 || f_Month <= 0)	//나머지 달은 1~12
//		result = 0;
//
//	if (f_Day > 31 || f_Day <= 0)	//나머지 달의 일수는 1~31
//		result = 0;
//
//	return result;
//}
//
//int main() {
//
//	int Year, Month, Day;
//	int True = 0;
//
//	while(True == 0){
//		printf("날짜 (년 월 일)? :" );
//		scanf("%d %d %d", &Year, &Month, &Day);
//
//		if (get_date_true(Year, Month, Day) == 0)
//			printf("잘못 입력 하셨습니다. 유효한 날짜를 입력하세요");
//
//		else if (get_date_true(Year, Month, Day) == 1){
//			printf("입력한 날짜는 %d년 %d월 %d일 입니다.", Year, Month, Day);
//			True = 1;
//		}
//		
//		printf("\n");
//	}
//}

/*2023. 02. 23
* 6. 함수
*  2.1)연습문제 2 (책)
* 9번
*/

int sizeofint(int data)
{
	int pos = 1, i;


	if (data < 0) data *= (-1);

	for (i = 0; ; i++, pos++)
	{
		if ((data /= 10) <= 0)
			break;
	}
	return(pos);
}

void get_bin(int f_Hex) {

	int i;
	int q = 0xfffffff;
	int x;

	for (i = 0; i < 4; i++) {
		if (f_Hex & q) {
			printf("1");
		}
		else {
			printf("0");
		}
		q = q << 1;
	}
}

int main() {

	int Hex;

	printf("정수? : ");
	scanf("%x", &Hex);

	get_bin(Hex);
}
