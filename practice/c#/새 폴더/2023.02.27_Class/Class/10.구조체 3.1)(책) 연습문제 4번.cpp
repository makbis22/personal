//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. ����ü
*  3.1)(å) �������� 4��
*/

struct date {
	int Year;
	int Month;
	int Day;
};

int main()
{
	struct date s1 = {};
	struct date arr[] = {
		{2022, 8, 15}, {2022, 3, 1}
	};
	int i = 1;
	int j;

	while (i > 0) {

		printf("��¥(������)?");
		scanf("%d %d %d", &s1.Year, &s1.Month, &s1.Day);

		for (j = 0; j < 2; j++) {
			if (arr[j].Month == s1.Month && arr[j].Month == s1.Month) {
				printf("%d/%d/%d�� ������ �Դϴ�.", s1.Year, s1.Month, s1.Day);
				break;
			}
		}
		if (j == 2)
			printf("%d/%d/%d�� �������� �ƴմϴ�.", s1.Year, s1.Month, s1.Day);

		if (s1.Year == 0 && s1.Month == 0 && s1.Day == 0) {
			break;
		}
		printf("\n");
	}
}