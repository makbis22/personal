//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 2 (책) p.182
*  3번
*/

int main(void)
{
    int x, y;

    printf("좌표 값 (x,y)입력 :");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1사분면");
    else if (x < 0 && y>0)
        printf("2사분면");
    else if (x < 0 && y < 0)
        printf("3사분면");
    else if (x > 0 && y < 0)
        printf("4사분면");
    else
        printf("0");
}