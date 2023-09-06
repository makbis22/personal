#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void fill_array(int arr[], int size, int value)
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] = value;
}

void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int data[SIZE];
    int value;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &value);

    fill_array(data, SIZE, value);
    print_array(data, SIZE);
}