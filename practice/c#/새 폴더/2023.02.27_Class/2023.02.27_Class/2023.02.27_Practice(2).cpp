//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <cctype>
#include <ctype.h>

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 1번
*/

//struct login_info {
//	char ID[20];
//	char Pass[20];
//};
//
//int main()
//{
//	struct login_info c1 = {NULL , NULL};
//	char ID[20];
//	char Pass[20];
//
//	int i;
//	
//	printf("ID? ");
//	scanf("%s", ID);
//	printf("PASS? ");
//	scanf("%s", Pass);
//
//	strcpy(c1.ID, ID);
//	strcpy(c1.Pass, Pass);
//
//	int Size = strlen(Pass);
//
//	printf("ID : %s\n", c1.ID);
//	printf("PW :");
//	for (i = 0; i < Size; i++) {
//		printf("*");
//	}
//}

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 2번
*/

//struct login_info {
//	char ID[20];
//	char Pass[20];
//};
//
//int main()
//{
//	struct login_info c1 = {};
//
//	int i;
//	
//	printf("ID? ");
//	scanf("%s", c1.ID);
//	printf("PASS? ");
//	scanf("%s", c1.Pass);
//
//	int ID_Size = strlen(c1.ID);
//	int Pass_Size = strlen(c1.Pass);
//
//	printf("ID :");
//	for (i = 0; i < ID_Size; i++) {
//		printf("%c", tolower(c1.ID[i]));
//	}
//	printf("\n");
//
//	printf("PW :");
//	for (i = 0; i < Pass_Size; i++) {
//		printf("*");
//	}
//}

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 3번
*/

//struct date {
//	int Year;
//	int Month;
//	int Day;
//};
//
//int main()
//{
//	struct date s1 = {};
//
//	printf("연? ");
//	scanf("%d", &s1.Year);
//	printf("월? ");
//	scanf("%d", &s1.Month);
//	printf("일? ");
//	scanf("%d", &s1.Day);
//
//	printf("%d/%d/%d", s1.Year, s1.Month, s1.Day);
//}

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 4번
*/

//struct date {
//	int Year;
//	int Month;
//	int Day;
//};
//
//int main()
//{
//	struct date s1 = {};
//	struct date arr[] = {
//		{2022, 8, 15}, {2022, 3, 1}
//	};
//	int i = 1;
//	int j;
//
//	while (i > 0) {
//
//		printf("날짜(연월일)?");
//		scanf("%d %d %d", &s1.Year, &s1.Month, &s1.Day);
//
//		for (j = 0; j < 2; j++) {
//			if (arr[j].Month == s1.Month && arr[j].Month == s1.Month) {
//				printf("%d/%d/%d은 공휴일 입니다.", s1.Year, s1.Month, s1.Day);
//				break;
//			}
//		}
//		if(j == 2)
//			printf("%d/%d/%d은 공휴일이 아닙니다.", s1.Year, s1.Month, s1.Day);
//		
//		if (s1.Year == 0 && s1.Month == 0 && s1.Day == 0) {
//			break;
//		}
//		printf("\n");
//	}
//}

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 5번
*/

//struct product {
//	char menu[20];
//	int price;
//	int lot;
//};
//
//int main()
//{
//	struct product p1 = {};
//
//	printf("제품명? ");
//	scanf("%s", p1.menu);
//	printf("가격? ");
//	scanf("%d", &p1.price);
//	printf("재고? ");
//	scanf("%d", &p1.lot);
//
//	printf("[%s %원 재고: %d]", p1.menu, p1.price, p1.lot);
//}

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 6번
*/

struct product {
	char menu[20];
	int price;
	int lot;
};

int main()
{
	struct product p1 = {};
	struct product arr[] = {NULL};
	int i, j;

	for (i = 0; i < 5; i++) {
		printf("제품명? ");
		scanf("%s", p1.menu);

		if (p1.menu[0] == '.')
			break;

		printf("가격? ");
		scanf("%d", &p1.price);
		printf("재고? ");
		scanf("%d", &p1.lot);

		strcpy(arr[i].menu, p1.menu);
		arr[i].price = p1.price;
		arr[i].lot = p1.lot;
		
	}
	for (j = 0; j < i; j++) {
		printf("[%s %d원 재고: %d]\n", arr[j].menu, arr[j].price, arr[j].lot);
	}
	printf("\n");
	return 0;
}