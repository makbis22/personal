//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

/*2023. 02. 27
* 10. 구조체
*  1.1)구조체 변수의 선언 및 사용
*/

//struct content {
//	char title[40];
//	int price;
//	double rate;
//};
//
//int main()
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content c2, c3;
//
//	strcpy(c2.title, "Aquaman");
//	c2.price = 5500;
//	c2.rate = 7.1;
//
//	strcpy(c3.title, "Shazam");
//	c3.price = 7700;
//	c3.rate = 7.4;
//
//	printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);
//	printf("c1 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);
//	printf("c1 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate);
//
//}

/*2023. 02. 27
* 10. 구조체
*  1.2)구조체 변수 간의 초기화와 대입
*/

//struct content {
//	char title[40];
//	int price;
//	double rate;
//};
//
//int main()
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content c2 = c1;
//	struct content c3 = { 0 };
//
//	c3 = c1;
//
//	printf("c1 = %s, %d, %.1f\n", c1.title, c1.price, c1.rate);
//	printf("c1 = %s, %d, %.1f\n", c2.title, c2.price, c2.rate);
//	printf("c1 = %s, %d, %.1f\n", c3.title, c3.price, c3.rate);
//}

/*2023. 02. 27
* 10. 구조체
*  1.3)구조체 변수의 비교
*/

//struct content {
//	char title[40];
//	int price;
//	double rate;
//};
//
//int main()
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content c2 = c1;
//
//	if (strcmp(c1.title, c2.title) == 0 && c1.price == c2.price && c1.rate == c2.rate) {
//		printf("c1과 c2의 값이 같습니다.\n");
//	}
//	else{
//		printf("c1과 c2의 값이 다릅니다.\n");
//	}
//}

/*2023. 02. 27
* 10. 구조체
*  1.4)구조체 배열의 사용
*/

//struct content {
//	char title[40];
//	int price;
//	double rate;
//}; 
//
//int main()
//{
//	struct content arr[] = {
//		{"Averners", 11000, 8.8},
//		{ "Aquaman",5500,7.1 },
//		{ "Shazam",7700,7.4 }
//	};
//	
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i;
//
//	for (i = 0; i < size; i++) {
//		printf("arr[%d] = %s, %d, %.1f\n", i, arr[i].title, arr[i].price, arr[i].rate);
//	}
//}

/*2023. 02. 27
* 10. 구조체
*  1.5)구조체 배열의 검색
*/

//struct content {
//	char title[40];
//	int price;
//	double rate;
//}; 
//
//int main()
//{
//	struct content arr[] = {
//		{ "Avengers", 11000, 8.8 }, { "Aquaman", 5500, 7.7 }, { "Shazam", 7700, 7.4 },
//		{ "X-men", 3300, 8.0 }, { "Us", 8800, 7.1 }, { "Inception", 2200, 8.7 }
//	};
//
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	char title[40];
//
//	printf("제목? : ");
//	scanf("%s", title);
//
//	for (i = 0; i < size; i++) {
//		if (strcmp(arr[i].title, title) == 0) {
//			break;
//		}
//	}
//	if (i == size) {
//		printf("해당 콘텐츠를 찾을 수 없읍니다.\n");
//	}
//	else
//		printf("%s : 가격 = %d, 평점 = %.1f\n", arr[i].title, arr[i].price, arr[i].rate);
//}

/*2023. 02. 27
* 10. 구조체
*  1.6)구조체 포인터
*/

//struct content {
//	char title[40];
//	int price;
//	double rate;
//}; 
//
//int main()
//{
//	struct content c1 = { "Avengers", 11000, 8.8 };
//	struct content* p = &c1;
//	
//	p->price *= 0.8;
//	p->rate = 8.9;
//	strcat(p->title, ": Endgame");
//
//	printf("%s, %d, %.1f\n", p->title, p->price, p->rate);
//}

/*2023. 02. 27
* 10. 구조체
*  1.7)값에 의한 호출로 구조체 전달하기
*/

//struct point {
//	int x, y;
//};
//
//void print_point(struct point pt);
//
//int main()
//{
//	struct point arr[] = {
//		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4,27}
//	};
//
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i;
//
//	for (i = 0; i < size; i++) {
//		print_point(arr[i]);
//	}
//	printf("\n");
//}
//
//void print_point(struct point pt)
//{
//	printf("(%d, %d) ",pt.x, pt.y);
//}

/*2023. 02. 27
* 10. 구조체
*  1.8)참조에 의한 호출로 구초체 전달하기
*/

//struct point {
//	int x, y;
//};
//
//void print_point(struct point* ptr);
//void move_point(struct point* ptr, int offset);
//
//int main()
//{
//	struct point arr[] = {
//		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4,27}
//	};
//
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i, offset;
//
//	for (i = 0; i < size; i++) {
//		print_point(&arr[i]);
//	}
//	printf("\n");
//
//	printf("이동할 오프셋? ");
//	scanf("%d", &offset);
//
//	for (i = 0; i < size; i++) {
//		move_point(&arr[i], offset);
//		print_point(&arr[i]);
//	}
//}
//
//void print_point(struct point* ptr)
//{
//	printf("(%d, %d) ", ptr->x, ptr->y);
//}
//
//void move_point(struct point* ptr, int offset)
//{
//	ptr->x = ptr->x + offset;
//	ptr->y = ptr->y + offset;
//}

/*2023. 02. 27
* 10. 구조체
*  1.9)Line 구조체의 정의 및 사용
*/

//void print_point(struct point* ptr);
//double get_length(struct line* ptr);
//
//struct point {
//	int x, y;
//};
//struct line {
//	struct point start, end;
//};
//int main()
//{
//	struct line ln1 = {
//		{10, 20}, {30, 40}
//	};
//
//	printf("직선 정보 : ");
//	print_point(&ln1.start);
//	print_point(&ln1.end);
//	printf("\n길이: %f\n", get_length(&ln1));
//}
//
//void print_point(struct point* ptr)
//{
//	printf("(%d, %d) ", ptr->x, ptr->y);
//}
//
//double get_length(struct line* ptr)
//{
//	int dx = ptr->end.x - ptr->start.x;
//	int dy = ptr->end.y - ptr->start.y;
//
//	return sqrt(dx * dx + dy * dy);
//}

/*2023. 02. 27
* 10. 구조체
*  2.1)열거체의 정의 및 사용
*/

//enum direction { north, south, east, west };
//
//int main()
//{
//	enum direction moves[] = {
//		north, north, east, south, south, west
//	};
//	int size = sizeof(moves) / sizeof(moves[0]);
//	int i;
//
//	printf("이동 순서 : ");
//	for (i = 0; i < size; i++) {
//		switch (moves[i]) {
//		case north :
//			printf("북 ");
//			break;
//		case south :
//			printf("남 ");
//			break;
//		case east :
//			printf("동 ");
//			break;
//		case west :
//			printf("서 ");
//			break;
//		}
//	}
//	printf("\n");
//}

/*2023. 02. 27
* 10. 구조체
*  2.2)공용체의 정의 및 사용
*/

//union test {
//	int i;
//	char c;
//	short s;
//};
//
//int main()
//{
//	union test t1 = { 0x12345678 };
//
//	printf("t1.i의 주소 = %p\n", &t1.i);
//	printf("t1.c의 주소 = %p\n", &t1.c);
//	printf("t1.s의 주소 = %p\n", &t1.s);
//
//	printf("sizeof(union test) = %d\n", sizeof(union test));
//
//	printf("t1.i = %x\n", t1.i);
//	printf("t1.c = %x\n", t1.c);
//	printf("t1.s = %x\n", t1.s);
//}

/*2023. 02. 27
* 10. 구조체
*  2.3)typedef의 정의 및 사용
*/

//typedef struct point {
//	int x, y;
//}point_t;
//
//void print_point(const point_t* ptr);
//
//int main()
//{
//	point_t pt1 = { 10, 20 };
//	print_point(&pt1);
//}
//
//void print_point(const point_t* ptr)
//{
//	printf("(%d, %d) ", ptr->x, ptr->y);
//}
