#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SEATS 10

void print_seat(int seats[], int size)
{
    int i;
    printf("현재 좌석: [ ");
    for (i = 0; i < size; i++) {
        if (seats[i] == 1)
            printf("X ");
        else
            printf("O ");
    }
    printf("]\n");
}

int main(void)
{
    int seats[MAX_SEATS] = { 0 };
    int occupied = 0;

    while (occupied < MAX_SEATS) {
        int request = 0;
        int empty;
        int i;

        print_seat(seats, MAX_SEATS);

        printf("예매할 좌석수? ");
        scanf("%d", &request);

        empty = MAX_SEATS - occupied;
        if (request > empty) {
            printf("남은 좌석 수가 %d이므로 %d좌석을 예매할 수 없습니다.\n", empty, request);
            continue;
        }
        for (i = 0; i < request; i++) {
            seats[occupied + i] = 1;
            printf("%d ", occupied + i + 1);
        }
        printf("번 좌석을 예매했습니다.\n");
        occupied += request;
    }
}