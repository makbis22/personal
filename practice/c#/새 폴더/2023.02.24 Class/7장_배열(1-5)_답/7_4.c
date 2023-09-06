#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    int found = 0, value = 0;

    printf("배열: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("찾을 값? ");
    scanf("%d", &value);

    found = 0;
    for (i = size - 1; i >= 0; i--) {
        if (arr[i] == value) {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("%d는 %d번째 원소입니다.\n", value, i);
    else
        printf("%d를 찾을 수 없습니다.\n", value);
}