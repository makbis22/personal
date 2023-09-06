//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  2.1)연습문제 2 (책)
* 5번
*/

void get_menu_select(int f_Num) {

	switch (f_Num)
	{
	case 1:
		printf("파일 열기를 수행합니다.\n");
		break;
	case 2:
		printf("파일 저장을 수행합니다.\n");
		break;
	case 3:
		printf("파일 인쇄를 수행합니다.\n");
		break;
	case 0:
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		break;
	}
}

int main() {

	int Num = 1;

	while (Num > 0) {
		printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] 선택? : ");
		scanf("%d", &Num);

		get_menu_select(Num);
		printf("\n");
	}
	return 0;
}