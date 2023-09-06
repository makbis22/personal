#include <stdio.h>

int main(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int i;
    int min, max;

    printf("배열: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    min = max = arr[0];

    for (i = 0; i < 10; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("최대값: %d\n최소값: %d\n", max, min);
}