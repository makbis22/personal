//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 4
*  동전을 던져 앞 뒤가 나오도록 프로그램
*/

int main(void)
{
    srand(time(NULL));
    int coin;

    coin = rand();

    printf("%d", coin);

    if (coin % 2 == 0)
        printf("앞면");
    else if (coin % 2 == 1)
        printf("뒷면");
}