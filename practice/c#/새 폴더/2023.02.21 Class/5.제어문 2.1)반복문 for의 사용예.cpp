//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  2.1)반복문 for문 사용예
*/

int main(void)
{
    int i;
    int num;

    for (i = 0; i < 5; i++)
        printf("%d ", i);
    printf("\n");

    printf("정수?");
    scanf("%d", &num);

    for (i = num; i >= 0; i--)
        printf("%d ", i);
    printf("\n");
}