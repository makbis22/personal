#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 7. 배열
*  2.2)(책 p.271) 연습문제 2 9번
*/

//int main()
//{
//	int x[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
//	int y[3][3] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
//	int i, j;
//	int sum[3][3] = {};
//
//	printf("x 행렬 : \n");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%2d ", x[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("y 행렬 : \n");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%2d ", y[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("x + y 행렬 : \n");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			sum[i][j] = x[i][j] + y[i][j];
//			printf("%2d ", sum[i][j]);
//		}
//		printf("\n");
//	}
//}

/*2023. 02. 24
* 7. 배열
*  2.2)(책 p.271) 연습문제 2 10번
*/

//void get_Seat_state(char f_Seat[], int f_size)		//남은자리 출력 함수
//{
//	int i;
//
//	printf("현재 좌석 : ");
//	printf(" [");
//	for (i = 0; i < f_size; i++) {
//		printf(" %c", f_Seat[i]);
//	}
//	printf(" ]\n");
//}
//
//int get_Seat_Reserve(char f_Seat[], int f_Size)		//'X'가 들어간 횟수 출력
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
//int get_Seat_Remain(char f_Seat[], int f_Size)		//'O'를 읽어 남은자리가 몇인지 출력
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
//	get_Seat_state(Seat, size);		//남은자리 printf 출력 함수
//
//	while (Break == 0){
//		printf("예약할 좌석수? : ");
//		scanf("%d", &Reserve);
//
//		if (Reserve > get_Seat_Remain(Seat, size)) {	//예약 가능 자리가 있는지 확인
//			printf("남은 좌석수가 %d이므로 %d좌석을 예매 할 수 없습니다.\n", get_Seat_Remain(Seat, size), Reserve);
//			break;
//		}
//
//		//예약 가능 = 예약 할 숫자 + 이미 찬 자리
//		Reserve_State = Reserve + get_Seat_Reserve(Seat, size);		//예약 상태 확인 하기위한 수식
//
//		for (i = (get_Seat_Reserve(Seat, size)); i < size; i++) {	//예약 자리에 'X'표시
//			if (Reserve_State == i) {								//예약 상태 확인하고 'X'가 있으면 건너띄고 'O'자리에 'X' 표시
//				break;
//			}
//			Seat[i] = 'X';
//			printf("%d ", i+1);
//		}
//		printf("번 좌석을 예매했습니다.\n");
//
//		get_Seat_state(Seat, size);		//남은자리 printf 출력 함수
//		}
//	return 0;
//}

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

/*2023. 02. 24
* 7. 배열
*  2.2)(책 p.271) 연습문제 2 11번
*/

//int main(void)
//{
//	int Music_List[10][10] = {};
//	int Size = sizeof(Music_List) / sizeof(Music_List[0]);
//	int i,j;
//
//	printf("셔플 전 : ");
//	for(j=0;j<Size;j++){
//		for (i = 0; i < Size; i++) {
//			Music_List[j][i] = rand() % 100;	//랜덤한 숫자를 0~100까지 10x10행렬에 넣음
//		}
//		printf("%2d ", Music_List[0][j]);
//	}
//	printf("\n");
//
//	printf("셔플 후 : ");
//	for (i = 0; i < Size; i++) {
//		printf("%2d ", Music_List[i][rand() % 10]);		//중복도 나오기 위해
//	}
//	return 0;
//}

/*2023. 02. 24
* 7. 배열
*  2.2)(책 p.271) 연습문제 2 12번
*/

//미완성 ㅠㅠ

//int main()
//{
//	srand(time(NULL));
//	int Num_by_Score[5][5] = {};
//	int i, j;
//	int Size = sizeof(Num_by_Score) / sizeof(Num_by_Score[0]);
//	int Random = 0;
//
//	for (j = 0; j < Size; j++) {	//중간, 기말, 팀플 랜덤으로 입력
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
//	for(i = 0; i < Size; i++) {	//출석 10점 랜덤으로 입력
//		Num_by_Score[4][i] = rand() % 10;
//		printf("%2d ", Num_by_Score[4][i]);
//	}
//
//	for (j = 0; j < Size; j++) {
//		printf("학생 %3d : ", j + 1);
//		for (i = 0; i < Size; i++) {
//			printf("%3d", Num_by_Score[j][i]);
//		}
//		printf("\n");
//	}
//}
