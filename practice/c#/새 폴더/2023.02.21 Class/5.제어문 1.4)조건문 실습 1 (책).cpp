//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 1 (책) p.182
*  2번
*/

int main(void)
{
    int x, y;
    double result;

    printf("등수?");
    scanf("%d", &x);
    printf("전체 인원수?");
    scanf("%d", &y);

    result = ((double)x / y) * 100;

    if (result <= 10)
        printf("A");
    else if (result <= 30)
        printf("B");
    else if (result <= 60)
        printf("C");
    else if (result <= 90)
        printf("D");
    else
        printf("F");

}