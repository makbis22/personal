//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>

/*2023. 02. 21
* 6. �Լ�
*  1.1)���� ���� �Ű� ������ ���� �Լ�
*/

//void hi(void) {
//	
//	printf("Hi! Hellow, �ȳ�\n");
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
* 6. �Լ�
*  1.2)draw_line �Լ��� ���� �� ȣ��
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
//	printf("���� �ܰ� �հ�\n");
//	width = 3 + 8 + 8 + 2;
//	draw_line('-', width);
//	total = amount * price;
//	printf("%3d %8d %8d\n", amount, price, total);
//
//	draw_line('=', 24);
//}

/*2023. 02. 21
* 6. �Լ�
*  1.3)get_factorial �Լ��� ���� �� ȣ��
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
//    printf("x ���丮�� :");
//    scanf("%d", &x);
//
//    for (i = 0; i <= x; i++) {
//        printf("%2d! = %3d\n", i, get_factorial(i)); //get_factorial �Լ� ȣ��
//    }                   //%2d�� %3d�� �տ� 2ĭ, 3ĭ�� ��ĭ�� �ǹ� 
//    return 0;
//}

/*2023. 02. 21
* 6. �Լ�
*  1.4)get_area �Լ�(���� ���� ���)
*/

//double get_area(double radius) {
//
//	const double pi = 3.14;
//	return pi * radius * radius;
//}
//
//int main() {
//
//	int r; //����
//	
//	for (r = 1; r <= 5; r++) {		//������ 1���� 5���� ���
//		printf("r=%d, ���� ���� = %.2f\n", r, get_area(r)); //r�� double������ ��ȯ�ؼ� ����
//	}
//}

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 1 (å)
* 1��
*/

//int get_mult(int x, int y) {	//x:���� ���� ��, y: �󸶳� ������
//
//	int i;
//	int result = 1;
//
//	for (i = 1; i <= y; i++) {	//x�� ����� ��� ���� for��
//		result = x * i;
//	}
//
//	return result;
//}
//
//int main() {	//���� �Լ�
//
//	int i;	//for�� ����
//	int num = 1;	//�Է� ���� ��
//
//	while(num > 0){
//
//		printf("����? :");
//		scanf("%d", &num);
//
//		if (num <= 0)	//�������� ���(�Է��� 0���Ϸ� ����)
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
* 6. �Լ�
*  2.1)�������� 2 (å)
* 2��
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
//	printf("���� ?");
//	scanf("%d", &width);
//	printf("���� ?");
//	scanf("%d", &length);
//
//	printf("���簢���� �ѷ� : %d", get_width_length(width, length));
//}

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 3��
*/

////���� �������� �Ÿ� ��� �Լ�
//double get_straight_length(double x1, double y1, double x2, double y2) {	//��ǥ �� ���� 4���� ����
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
//	printf("������ ������ ��ǥ? :");
//	scanf("%d %d", &x1, &y1);
//	printf("������ ���� ��ǥ? :");
//	scanf("%d %d", &x2, &y2);
//
//	printf("(%d, %d)~(%d, %d) ������ ���� : %.2lf",x1,y1,x2,y2,
//		get_straight_length(x1,y1,x2,y2));
//
//	return 0;
//}

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 4��
*/

//�������� �������ڸ� �޾� ����ϴ� �Լ�
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
//	int Price = 1;	//while���� ������ ���� 1�� �ʱ�ȭ
//
//	while(Price > 0){	//������ 0�� �� ��������
//		printf("������(%)? :");
//		scanf("%d", &Discount);
//
//		printf("��ǰ�� ����? :");
//		scanf("%d", &Price);
//
//		printf("���ΰ�? : %d", get_discount_price(Discount, Price));
//		printf("\n");
//	}
//	return 0;
//}

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 5��
*/

//void get_menu_select(int f_Num) {
//
//	switch (f_Num)
//	{
//	case 1:
//		printf("���� ���⸦ �����մϴ�.\n");
//		break;
//	case 2:
//		printf("���� ������ �����մϴ�.\n");
//		break;
//	case 3:
//		printf("���� �μ⸦ �����մϴ�.\n");
//		break;
//	case 0:
//		break;
//	default:
//		printf("�߸� �Է��ϼ̽��ϴ�.\n");
//		break;
//	}
//}
//
//int main() {
//
//	int Num = 1;
//	
//	while (Num > 0) {
//		printf("[1.���� ����  2.���� ����  3.�μ�  0.����] ����? : ");
//		scanf("%d", &Num);
//
//		get_menu_select(Num);
//		printf("\n");
//	}
//	return 0;
//}

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 6��
*/

//int get_red(int f_RGB) {	//RGB���� Red�� ���� �Լ�
//
//	int Mask = 0xff;
//	int Result = 0;
//
//	Result = f_RGB & Mask;
//
//	return Result;
//}
//
//int get_green(int f_RGB) {	//RGB���� green�� ���� �Լ�
//
//	int Mask = 0xff;
//	int Result = 0;
//
//	Result = (f_RGB >> 8) & Mask;
//
//	return Result;
//}
//
//int get_blue(int f_RGB) {	//RGB���� blue�� ���� �Լ�
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
//	printf("RGB ����? : ");
//	scanf("%x", &RGB);
//
//	printf("RGB %06x�� red : %d, green : %d, blue : %d\n", RGB, get_red(RGB),
//		get_green(RGB), get_blue(RGB));
//	
//	return 0;
//
//}

/*2023. 02. 21
* 6. �Լ�
*  2.1)�������� 2 (å)
* 7��
*/

void get_leap_year(int f_Year) {	//���� ����

	if ((f_Year % 4 == 0) && ((f_Year % 100 != 0) || (f_Year % 400 == 0)))
		printf("%d ", f_Year);
	else
		printf("");
}

int main() {

	int Year;
	int i;
	
	for (i = 2000; i <= 2100; i++) {	//2000���� 2100����� ���� ���ϱ�
		get_leap_year(i);
	}
	
	return 0;
}