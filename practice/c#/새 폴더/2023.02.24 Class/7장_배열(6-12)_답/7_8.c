#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int prices[SIZE] = { 0 };
    int reduced_prices[10] = { 0 };
    int discount_rate = 0;
    int i;

    printf("��ǰ�� %d���� �Է��ϼ���: ", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &prices[i]);

    printf("������(%%)? ");
    scanf("%d", &discount_rate);

    for (i = 0; i < SIZE; i++)
        reduced_prices[i] = (int)(prices[i] * (100 - discount_rate) * 0.01);

    for (i = 0; i < SIZE; i++)
        printf("����: %6d --> ���ΰ�: %6d\n", prices[i], reduced_prices[i]);
}