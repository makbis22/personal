#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int prices[SIZE] = { 0 };
    int reduced_prices[10] = { 0 };
    int discount_rate = 0;
    int i;

    printf("상품가 %d개를 입력하세요: ", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &prices[i]);

    printf("할인율(%%)? ");
    scanf("%d", &discount_rate);

    for (i = 0; i < SIZE; i++)
        reduced_prices[i] = (int)(prices[i] * (100 - discount_rate) * 0.01);

    for (i = 0; i < SIZE; i++)
        printf("가격: %6d --> 할인가: %6d\n", prices[i], reduced_prices[i]);
}