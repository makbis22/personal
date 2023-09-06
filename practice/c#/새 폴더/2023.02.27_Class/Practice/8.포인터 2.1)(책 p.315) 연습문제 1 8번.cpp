//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 8 ������. �迭
*  2.1)(å p.315) �������� 1 8��
*/

void rand_array(int* arr, int size, int num)
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] = rand() % num;
}

void print_array(const int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%2d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int data[10];

    srand((unsigned int)time(NULL));

    rand_array(data, 10, 100);
    print_array(data, 10);
}