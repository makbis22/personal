#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int main(void)
{
    double arr[SIZE] = { 0 };
    int i;
    double ratio;   // ����

    printf("ù ��° ��? ");
    scanf("%lf", &arr[0]);
    printf("����? ");
    scanf("%lf", &ratio);

    for (i = 1; i < SIZE; i++)
        arr[i] = arr[i - 1] * ratio;

    printf("������: ");
    for (int i = 0; i < SIZE; i++)
        printf("%g ", arr[i]);
    printf("\n");
}