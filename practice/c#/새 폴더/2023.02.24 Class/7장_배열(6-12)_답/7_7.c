#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

double get_sum_of_array(double arr[], int size)
{
    double sum = 0;
    int i;
    for (i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main(void)
{
    double data[5] = { 0 };
    int i;
    printf("�Ǽ� %d���� �Է��ϼ���: ", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%lf", &data[i]);
    printf("�հ� : %f\n", get_sum_of_array(data, SIZE));
}