//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. ����ü
*  3.1)(å) �������� 3��
*/

struct date {
	int Year;
	int Month;
	int Day;
};

int main()
{
	struct date s1 = {};

	printf("��? ");
	scanf("%d", &s1.Year);
	printf("��? ");
	scanf("%d", &s1.Month);
	printf("��? ");
	scanf("%d", &s1.Day);

	printf("%d/%d/%d", s1.Year, s1.Month, s1.Day);
}