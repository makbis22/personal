#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int main(void)
{
    int arr[SIZE] = { 0 };
    int i;
    int diff;   // ����

    printf("ù ��° ��? ");
    scanf("%d", &arr[0]);
    printf("����? ");
    scanf("%d", &diff);

    for (i = 1; i < SIZE; i++)
        arr[i] = arr[i - 1] + diff;

    printf("��������: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}