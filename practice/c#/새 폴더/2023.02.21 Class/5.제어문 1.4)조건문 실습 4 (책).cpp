//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 4 (책) p.183
*  5번
*/

int main(void)
{
    int temp;
    char x;
    double C, F;

    printf("온도? :");
    scanf("%d %c", &temp, &x);

    printf("%d\n", temp);
    if (x == 0x43) {
        F = (double)temp * 9 / 5 + 32;
        printf("%d %c == %.2lfF", temp, x, F);
    }
    else if (x == 0x46) {
        C = ((double)temp - 32) * 5 / 9;
        printf("%d %c == %.2lfC", temp, x, C);
    }
    else
        printf("잘못 입력");
}