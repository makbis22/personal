//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 7. 배열
*  2.2)(책 p.271) 연습문제 2 10번
*/

void get_Seat_state(char f_Seat[], int f_size)		//남은자리 출력 함수
{
	int i;

	printf("현재 좌석 : ");
	printf(" [");
	for (i = 0; i < f_size; i++) {
		printf(" %c", f_Seat[i]);
	}
	printf(" ]\n");
}

int get_Seat_Reserve(char f_Seat[], int f_Size)		//'X'가 들어간 횟수 출력
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
int get_Seat_Remain(char f_Seat[], int f_Size)		//'O'를 읽어 남은자리가 몇인지 출력
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

	get_Seat_state(Seat, size);		//남은자리 printf 출력 함수

	while (Break == 0) {
		printf("예약할 좌석수? : ");
		scanf("%d", &Reserve);

		if (Reserve > get_Seat_Remain(Seat, size)) {	//예약 가능 자리가 있는지 확인
			printf("남은 좌석수가 %d이므로 %d좌석을 예매 할 수 없습니다.\n", get_Seat_Remain(Seat, size), Reserve);
			break;
		}

		//예약 가능 = 예약 할 숫자 + 이미 찬 자리
		Reserve_State = Reserve + get_Seat_Reserve(Seat, size);		//예약 상태 확인 하기위한 수식

		for (i = (get_Seat_Reserve(Seat, size)); i < size; i++) {	//예약 자리에 'X'표시
			if (Reserve_State == i) {								//예약 상태 확인하고 'X'가 있으면 건너띄고 'O'자리에 'X' 표시
				break;
			}
			Seat[i] = 'X';
			printf("%d ", i + 1);
		}
		printf("번 좌석을 예매했습니다.\n");

		get_Seat_state(Seat, size);		//남은자리 printf 출력 함수
	}
	return 0;
}

//아래는 교수님 방법 (훨씬간단함;;;;;;;;;)

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
//        printf("예매할 좌석수? ");
//        scanf("%d", &request);
//
//        empty = MAX_SEATS - occupied;
//        if (request > empty) {
//            printf("남은 좌석 수가 %d이므로 %d좌석을 예매할 수 없습니다.\n", empty, request);
//            continue;
//        }
//        for (i = 0; i < request; i++) {
//            seats[occupied + i] = 1;
//            printf("%d ", occupied + i + 1);
//        }
//        printf("번 좌석을 예매했습니다.\n");
//        occupied += request;
//    }
//}
