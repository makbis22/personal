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
* 10. ����ü
*  3.1)(å) �������� 1��
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
* 10. ����ü
*  3.1)(å) �������� 2��
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
* 10. ����ü
*  3.1)(å) �������� 3��
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
//	printf("��? ");
//	scanf("%d", &s1.Year);
//	printf("��? ");
//	scanf("%d", &s1.Month);
//	printf("��? ");
//	scanf("%d", &s1.Day);
//
//	printf("%d/%d/%d", s1.Year, s1.Month, s1.Day);
//}

/*2023. 02. 27
* 10. ����ü
*  3.1)(å) �������� 4��
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
//		printf("��¥(������)?");
//		scanf("%d %d %d", &s1.Year, &s1.Month, &s1.Day);
//
//		for (j = 0; j < 2; j++) {
//			if (arr[j].Month == s1.Month && arr[j].Month == s1.Month) {
//				printf("%d/%d/%d�� ������ �Դϴ�.", s1.Year, s1.Month, s1.Day);
//				break;
//			}
//		}
//		if(j == 2)
//			printf("%d/%d/%d�� �������� �ƴմϴ�.", s1.Year, s1.Month, s1.Day);
//		
//		if (s1.Year == 0 && s1.Month == 0 && s1.Day == 0) {
//			break;
//		}
//		printf("\n");
//	}
//}

/*2023. 02. 27
* 10. ����ü
*  3.1)(å) �������� 5��
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
//	printf("��ǰ��? ");
//	scanf("%s", p1.menu);
//	printf("����? ");
//	scanf("%d", &p1.price);
//	printf("���? ");
//	scanf("%d", &p1.lot);
//
//	printf("[%s %�� ���: %d]", p1.menu, p1.price, p1.lot);
//}

/*2023. 02. 27
* 10. ����ü
*  3.1)(å) �������� 6��
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
		printf("��ǰ��? ");
		scanf("%s", p1.menu);

		if (p1.menu[0] == '.')
			break;

		printf("����? ");
		scanf("%d", &p1.price);
		printf("���? ");
		scanf("%d", &p1.lot);

		strcpy(arr[i].menu, p1.menu);
		arr[i].price = p1.price;
		arr[i].lot = p1.lot;
		
	}
	for (j = 0; j < i; j++) {
		printf("[%s %d�� ���: %d]\n", arr[j].menu, arr[j].price, arr[j].lot);
	}
	printf("\n");
	return 0;
}