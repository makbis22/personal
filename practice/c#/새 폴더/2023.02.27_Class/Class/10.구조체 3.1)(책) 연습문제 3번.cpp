//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 3번
*/

struct date {
	int Year;
	int Month;
	int Day;
};

int main()
{
	struct date s1 = {};

	printf("연? ");
	scanf("%d", &s1.Year);
	printf("월? ");
	scanf("%d", &s1.Month);
	printf("일? ");
	scanf("%d", &s1.Day);

	printf("%d/%d/%d", s1.Year, s1.Month, s1.Day);
}