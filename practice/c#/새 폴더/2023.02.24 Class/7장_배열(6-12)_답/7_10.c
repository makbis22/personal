#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SEATS 10

void print_seat(int seats[], int size)
{
    int i;
    printf("���� �¼�: [ ");
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

        printf("������ �¼���? ");
        scanf("%d", &request);

        empty = MAX_SEATS - occupied;
        if (request > empty) {
            printf("���� �¼� ���� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�.\n", empty, request);
            continue;
        }
        for (i = 0; i < request; i++) {
            seats[occupied + i] = 1;
            printf("%d ", occupied + i + 1);
        }
        printf("�� �¼��� �����߽��ϴ�.\n");
        occupied += request;
    }
}