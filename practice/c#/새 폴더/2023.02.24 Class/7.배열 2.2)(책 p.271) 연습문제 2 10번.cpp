//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 7. �迭
*  2.2)(å p.271) �������� 2 10��
*/

void get_Seat_state(char f_Seat[], int f_size)		//�����ڸ� ��� �Լ�
{
	int i;

	printf("���� �¼� : ");
	printf(" [");
	for (i = 0; i < f_size; i++) {
		printf(" %c", f_Seat[i]);
	}
	printf(" ]\n");
}

int get_Seat_Reserve(char f_Seat[], int f_Size)		//'X'�� �� Ƚ�� ���
{
	int i;
	int Result = 0;

	for (i = 0; i < f_Size; i++) {
		if (f_Seat[i] == 'O') {
			break;
		}
		else {
			Result += 1;
		}
	}
	return Result;
}
int get_Seat_Remain(char f_Seat[], int f_Size)		//'O'�� �о� �����ڸ��� ������ ���
{
	int i;
	int Result = 0;

	for (i = 0; i < f_Size; i++) {
		if (f_Seat[i] == 'O')
			Result += 1;
		else
			Result;
	}
	return Result;
}

int main()
{
	char Seat[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
	int i, j;
	int size = sizeof(Seat) / sizeof(Seat[0]);
	int Reserve;
	int Reserve_State;
	int Break = 0;

	get_Seat_state(Seat, size);		//�����ڸ� printf ��� �Լ�

	while (Break == 0) {
		printf("������ �¼���? : ");
		scanf("%d", &Reserve);

		if (Reserve > get_Seat_Remain(Seat, size)) {	//���� ���� �ڸ��� �ִ��� Ȯ��
			printf("���� �¼����� %d�̹Ƿ� %d�¼��� ���� �� �� �����ϴ�.\n", get_Seat_Remain(Seat, size), Reserve);
			break;
		}

		//���� ���� = ���� �� ���� + �̹� �� �ڸ�
		Reserve_State = Reserve + get_Seat_Reserve(Seat, size);		//���� ���� Ȯ�� �ϱ����� ����

		for (i = (get_Seat_Reserve(Seat, size)); i < size; i++) {	//���� �ڸ��� 'X'ǥ��
			if (Reserve_State == i) {								//���� ���� Ȯ���ϰ� 'X'�� ������ �ǳʶ�� 'O'�ڸ��� 'X' ǥ��
				break;
			}
			Seat[i] = 'X';
			printf("%d ", i + 1);
		}
		printf("�� �¼��� �����߽��ϴ�.\n");

		get_Seat_state(Seat, size);		//�����ڸ� printf ��� �Լ�
	}
	return 0;
}

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
