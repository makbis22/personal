//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>

/*2023. 02. 21
* 6. 함수
*  1.1)리턴 값과 매개 변수가 없는 함수
*/

//void hi(void) {
//	
//	printf("Hi! Hellow, 안녕\n");
//}
//
//void bye() { printf("Bye!\n"); }
//
//int main(void) {
//
//	hi();
//	bye();
//	hi();
//	bye();
//}

/*2023. 02. 21
* 6. 함수
*  1.2)draw_line 함수의 정의 및 호출
*/

//void draw_line(char ch, int len) {
//
//	int i;
//
//	for (i = 0; i < len; i++) {
//		printf("%c", ch);
//	}
//	printf("\n");
//}
//
//int main(void) {
//
//	int amount = 10, price = 1000;
//	int total = 0, width = 0;
//
//	draw_line('=', 24);
//
//	printf("수량 단가 합계\n");
//	width = 3 + 8 + 8 + 2;
//	draw_line('-', width);
//	total = amount * price;
//	printf("%3d %8d %8d\n", amount, price, total);
//
//	draw_line('=', 24);
//}

/*2023. 02. 21
* 6. 함수
*  1.3)get_factorial 함수의 정의 및 호출
*/

//int get_factorial(int num) {
//
//    int i;
//    int fact = 1;
//
//    for (i = 1; i <= num; i++) {
//        fact *= i;
//    }
//    return fact;
//}
//int main() {
//
//    int i, x;
//
//    printf("x 팩토리얼 :");
//    scanf("%d", &x);
//
//    for (i = 0; i <= x; i++) {
//        printf("%2d! = %3d\n", i, get_factorial(i)); //get_factorial 함수 호출
//    }                   //%2d나 %3d는 앞에 2칸, 3칸이 빈칸을 의미 
//    return 0;
//}

/*2023. 02. 21
* 6. 함수
*  1.4)get_area 함수(원의 면적 계산)
*/

//double get_area(double radius) {
//
//	const double pi = 3.14;
//	return pi * radius * radius;
//}
//
//int main() {
//
//	int r; //지름
//	
//	for (r = 1; r <= 5; r++) {		//면적을 1에서 5까지 출력
//		printf("r=%d, 원의 면적 = %.2f\n", r, get_area(r)); //r을 double형으로 변환해서 전달
//	}
//}

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 1 (책)
* 1번
*/

//int get_mult(int x, int y) {	//x:곱할 정수 값, y: 얼마나 곱할지
//
//	int i;
//	int result = 1;
//
//	for (i = 1; i <= y; i++) {	//x의 배수를 얻기 위한 for문
//		result = x * i;
//	}
//
//	return result;
//}
//
//int main() {	//메인 함수
//
//	int i;	//for문 인자
//	int num = 1;	//입력 받을 값
//
//	while(num > 0){
//
//		printf("정수? :");
//		scanf("%d", &num);
//
//		if (num <= 0)	//빠져나올 방법(입력을 0이하로 받음)
//			break;
//
//		for (i = 1; i <= 20; i++){
//			printf("%d ", get_mult(num, i));
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 2번
*/

//int get_width_length(int x, int y) {
//
//	int result = 0;
//
//	result = (x * 2) + (y * 2);
//
//	return result;
//}
//
//int main() {
//
//	int width, length;
//
//	printf("가로 ?");
//	scanf("%d", &width);
//	printf("세로 ?");
//	scanf("%d", &length);
//
//	printf("직사각형의 둘레 : %d", get_width_length(width, length));
//}

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 3번
*/

////점과 점사이의 거리 계산 함수
//double get_straight_length(double x1, double y1, double x2, double y2) {	//좌표 값 인자 4개를 받음
//	
//	double result = 0;
//
//	result = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
//
//	return result;
//}
//int main() {
//
//	int x1, y1;
//	int x2, y2;
//
//	printf("직선의 시작점 좌표? :");
//	scanf("%d %d", &x1, &y1);
//	printf("직선의 끝점 좌표? :");
//	scanf("%d %d", &x2, &y2);
//
//	printf("(%d, %d)~(%d, %d) 직선의 길이 : %.2lf",x1,y1,x2,y2,
//		get_straight_length(x1,y1,x2,y2));
//
//	return 0;
//}

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 4번
*/

//할인율과 가격인자를 받아 계산하는 함수
//int get_discount_price(int f_Discount, int f_Price) {
//	
//	int result = 0;
//
//	result = f_Price * (1-((double)f_Discount / 100));
//
//	return result;
//}
//
//int main() {
//
//	int Discount;
//	int Price = 1;	//while문을 돌리기 위해 1로 초기화
//
//	while(Price > 0){	//가격이 0일 때 빠져나옴
//		printf("할인율(%)? :");
//		scanf("%d", &Discount);
//
//		printf("제품의 가격? :");
//		scanf("%d", &Price);
//
//		printf("할인가? : %d", get_discount_price(Discount, Price));
//		printf("\n");
//	}
//	return 0;
//}

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 5번
*/

//void get_menu_select(int f_Num) {
//
//	switch (f_Num)
//	{
//	case 1:
//		printf("파일 열기를 수행합니다.\n");
//		break;
//	case 2:
//		printf("파일 저장을 수행합니다.\n");
//		break;
//	case 3:
//		printf("파일 인쇄를 수행합니다.\n");
//		break;
//	case 0:
//		break;
//	default:
//		printf("잘못 입력하셨습니다.\n");
//		break;
//	}
//}
//
//int main() {
//
//	int Num = 1;
//	
//	while (Num > 0) {
//		printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] 선택? : ");
//		scanf("%d", &Num);
//
//		get_menu_select(Num);
//		printf("\n");
//	}
//	return 0;
//}

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 6번
*/

//int get_red(int f_RGB) {	//RGB에서 Red값 추출 함수
//
//	int Mask = 0xff;
//	int Result = 0;
//
//	Result = f_RGB & Mask;
//
//	return Result;
//}
//
//int get_green(int f_RGB) {	//RGB에서 green값 추출 함수
//
//	int Mask = 0xff;
//	int Result = 0;
//
//	Result = (f_RGB >> 8) & Mask;
//
//	return Result;
//}
//
//int get_blue(int f_RGB) {	//RGB에서 blue값 추출 함수
//
//	int Mask = 0xff;
//	int Result = 0;
//
//	Result = (f_RGB >> 16) & Mask;
//
//	return Result;
//}
//
//int main(void)
//{
//
//	unsigned int RGB;
//
//	printf("RGB 색상? : ");
//	scanf("%x", &RGB);
//
//	printf("RGB %06x의 red : %d, green : %d, blue : %d\n", RGB, get_red(RGB),
//		get_green(RGB), get_blue(RGB));
//	
//	return 0;
//
//}

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 7번
*/

void get_leap_year(int f_Year) {	//윤년 추출

	if ((f_Year % 4 == 0) && ((f_Year % 100 != 0) || (f_Year % 400 == 0)))
		printf("%d ", f_Year);
	else
		printf("");
}

int main() {

	int Year;
	int i;
	
	for (i = 2000; i <= 2100; i++) {	//2000부터 2100년까지 윤년 구하기
		get_leap_year(i);
	}
	
	return 0;
}