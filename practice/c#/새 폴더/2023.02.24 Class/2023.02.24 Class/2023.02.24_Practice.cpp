#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 7. �迭
*  2.2)(å p.271) �������� 2 9��
*/

//int main()
//{
//	int x[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
//	int y[3][3] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
//	int i, j;
//	int sum[3][3] = {};
//
//	printf("x ��� : \n");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%2d ", x[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("y ��� : \n");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%2d ", y[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("x + y ��� : \n");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			sum[i][j] = x[i][j] + y[i][j];
//			printf("%2d ", sum[i][j]);
//		}
//		printf("\n");
//	}
//}

/*2023. 02. 24
* 7. �迭
*  2.2)(å p.271) �������� 2 10��
*/

//void get_Seat_state(char f_Seat[], int f_size)		//�����ڸ� ��� �Լ�
//{
//	int i;
//
//	printf("���� �¼� : ");
//	printf(" [");
//	for (i = 0; i < f_size; i++) {
//		printf(" %c", f_Seat[i]);
//	}
//	printf(" ]\n");
//}
//
//int get_Seat_Reserve(char f_Seat[], int f_Size)		//'X'�� �� Ƚ�� ���
//{
//	int i;
//	int Result = 0;
//
//	for (i = 0; i < f_Size; i++) {
//		if (f_Seat[i] == 'O') {
//			break;
//		}
//		else {
//			Result += 1;
//		}
//	}
//	return Result;
//}
//int get_Seat_Remain(char f_Seat[], int f_Size)		//'O'�� �о� �����ڸ��� ������ ���
//{
//	int i;
//	int Result = 0;
//
//	for (i = 0; i < f_Size; i++) {
//		if (f_Seat[i] == 'O')
//			Result += 1;
//		else
//			Result;
//	}
//	return Result;
//}
//
//int main()
//{
//	char Seat[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'};
//	int i, j;
//	int size = sizeof(Seat) / sizeof(Seat[0]);
//	int Reserve;
//	int Reserve_State;
//	int Break = 0;
//
//	get_Seat_state(Seat, size);		//�����ڸ� printf ��� �Լ�
//
//	while (Break == 0){
//		printf("������ �¼���? : ");
//		scanf("%d", &Reserve);
//
//		if (Reserve > get_Seat_Remain(Seat, size)) {	//���� ���� �ڸ��� �ִ��� Ȯ��
//			printf("���� �¼����� %d�̹Ƿ� %d�¼��� ���� �� �� �����ϴ�.\n", get_Seat_Remain(Seat, size), Reserve);
//			break;
//		}
//
//		//���� ���� = ���� �� ���� + �̹� �� �ڸ�
//		Reserve_State = Reserve + get_Seat_Reserve(Seat, size);		//���� ���� Ȯ�� �ϱ����� ����
//
//		for (i = (get_Seat_Reserve(Seat, size)); i < size; i++) {	//���� �ڸ��� 'X'ǥ��
//			if (Reserve_State == i) {								//���� ���� Ȯ���ϰ� 'X'�� ������ �ǳʶ�� 'O'�ڸ��� 'X' ǥ��
//				break;
//			}
//			Seat[i] = 'X';
//			printf("%d ", i+1);
//		}
//		printf("�� �¼��� �����߽��ϴ�.\n");
//
//		get_Seat_state(Seat, size);		//�����ڸ� printf ��� �Լ�
//		}
//	return 0;
//}

//�Ʒ��� ������ ��� (�ξ�������;;;;;;;;;)

//int main(void)
//{
//    int seats[MAX_SEATS] = { 0 };
//    int occupied = 0;
//
//    while (occupied < MAX_SEATS) {
//        int request = 0;
//        int empty;
//        int i;
//
//        print_seat(seats, MAX_SEATS);
//
//        printf("������ �¼���? ");
//        scanf("%d", &request);
//
//        empty = MAX_SEATS - occupied;
//        if (request > empty) {
//            printf("���� �¼� ���� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�.\n", empty, request);
//            continue;
//        }
//        for (i = 0; i < request; i++) {
//            seats[occupied + i] = 1;
//            printf("%d ", occupied + i + 1);
//        }
//        printf("�� �¼��� �����߽��ϴ�.\n");
//        occupied += request;
//    }
//}

/*2023. 02. 24
* 7. �迭
*  2.2)(å p.271) �������� 2 11��
*/

//int main(void)
//{
//	int Music_List[10][10] = {};
//	int Size = sizeof(Music_List) / sizeof(Music_List[0]);
//	int i,j;
//
//	printf("���� �� : ");
//	for(j=0;j<Size;j++){
//		for (i = 0; i < Size; i++) {
//			Music_List[j][i] = rand() % 100;	//������ ���ڸ� 0~100���� 10x10��Ŀ� ����
//		}
//		printf("%2d ", Music_List[0][j]);
//	}
//	printf("\n");
//
//	printf("���� �� : ");
//	for (i = 0; i < Size; i++) {
//		printf("%2d ", Music_List[i][rand() % 10]);		//�ߺ��� ������ ����
//	}
//	return 0;
//}

/*2023. 02. 24
* 7. �迭
*  2.2)(å p.271) �������� 2 12��
*/

//�̿ϼ� �Ф�

//int main()
//{
//	srand(time(NULL));
//	int Num_by_Score[5][5] = {};
//	int i, j;
//	int Size = sizeof(Num_by_Score) / sizeof(Num_by_Score[0]);
//	int Random = 0;
//
//	for (j = 0; j < Size; j++) {	//�߰�, �⸻, ���� �������� �Է�
//
//		for (i = 0; i < Size; i++) {
//			Random = rand() % 100;
//			if (Random > 30 || Random == 0) {
//				i = i - 1;
//				continue;
//				if (i != 4 || Random > 10) {
//					continue;
//				}
//			}
//			else {
//				Num_by_Score[j][i] = Random;
//			}
//
//			printf("%2d   ", Num_by_Score[j][i]);
//		}
//		printf("\n");
//	}
//	
//	
//	for(i = 0; i < Size; i++) {	//�⼮ 10�� �������� �Է�
//		Num_by_Score[4][i] = rand() % 10;
//		printf("%2d ", Num_by_Score[4][i]);
//	}
//
//	for (j = 0; j < Size; j++) {
//		printf("�л� %3d : ", j + 1);
//		for (i = 0; i < Size; i++) {
//			printf("%3d", Num_by_Score[j][i]);
//		}
//		printf("\n");
//	}
//}
