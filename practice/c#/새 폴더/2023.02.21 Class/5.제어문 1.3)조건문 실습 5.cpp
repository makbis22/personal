//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 5
*  사용자로부터 3개의 정수를 입력 받아 가장 큰 수를 찾는 프로그램
*/

int main(void)
{
    int x, y, z;

    printf("3개의 정수를 입력하시오 :");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
        printf("가장 큰 정수는 %d이다.", x);
    else if (y > x && y > z)
        printf("가장 큰 정수는 %d이다.", y);
    else
        printf("가장 큰 정수는 %d이다.", z);
}