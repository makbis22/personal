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

		printf("[[ ���� ó�� �ý��� ]]\n");
		printf("1. �����Է�\n2. ����ó��\n3. ������ȸ\n4. ����\n �޴� ���� >> ");
		scanf("%d", &select);

		switch (select) {
		case 1 :{
			printf("1���л�\n");
			printf("���� 1 ���� : \n");
			scanf("%d", &arr[0][0]);
			printf("���� 2 ���� : \n");
			scanf("%d", &arr[0][1]);
			printf("���� 3 ���� : \n");
			scanf("%d", &arr[0][2]);

			printf("2���л�\n");
			printf("���� 1 ���� : \n");
			scanf("%d", &arr[1][0]);
			printf("���� 2 ���� : \n");
			scanf("%d", &arr[1][1]);
			printf("���� 3 ���� : \n");
			scanf("%d", &arr[1][2]);

			printf("3���л�\n");
			printf("���� 1 ���� : \n");
			scanf("%d", &arr[2][0]);
			printf("���� 2 ���� : \n");
			scanf("%d", &arr[2][1]);
			printf("���� 3 ���� : \n");
			scanf("%d", &arr[2][2]);

			break;
		}
		case 2:{
			if (arr[0][0] == 0) {
				printf("ó���� �����Ͱ� �����ϴ�.\n");
				break;
			}
			else{


			}

		}
		case 3:{
		}
		case 4: {
			printf("���α׷� ����.\n");
			flag = 0;
			break;
		default:
			printf("�߸��� �Է��Դϴ�.\n\n");
			break;
		}
		}
	}

}