#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define COL 3
#define LAW 4

int main(void) {

	int flag = 1;
	int select = 0;
	int arr[COL][LAW] = { 0 };
	int i = 0;
	int j = 0;
	int total = 0;
	int average = 0;
	int rank1 = 0;
	int rank2 = 0;
	int rank3 = 0;
//
	while (flag) {

		printf("[[ 성적 처리 시스템 ]]\n");
		printf("1. 점수입력\n2. 성적처리\n3. 성적조회\n4. 종료\n 메뉴 선택 >> ");
		scanf("%d", &select);

		switch (select) {
		case 1 :{
			printf("1번학생\n");
			printf("과목 1 점수 : \n");
			scanf("%d", &arr[0][0]);
			printf("과목 2 점수 : \n");
			scanf("%d", &arr[0][1]);
			printf("과목 3 점수 : \n");
			scanf("%d", &arr[0][2]);

			printf("2번학생\n");
			printf("과목 1 점수 : \n");
			scanf("%d", &arr[1][0]);
			printf("과목 2 점수 : \n");
			scanf("%d", &arr[1][1]);
			printf("과목 3 점수 : \n");
			scanf("%d", &arr[1][2]);

			printf("3번학생\n");
			printf("과목 1 점수 : \n");
			scanf("%d", &arr[2][0]);
			printf("과목 2 점수 : \n");
			scanf("%d", &arr[2][1]);
			printf("과목 3 점수 : \n");
			scanf("%d", &arr[2][2]);

			break;
		}
		case 2:{
			if (arr[0][0] == 0) {
				printf("처리할 데이터가 없습니다.\n");
				break;
			}
			else{


			}

		}
		case 3:{
		}
		case 4: {
			printf("프로그램 종료.\n");
			flag = 0;
			break;
		default:
			printf("잘못된 입력입니다.\n\n");
			break;
		}
		}
	}

}