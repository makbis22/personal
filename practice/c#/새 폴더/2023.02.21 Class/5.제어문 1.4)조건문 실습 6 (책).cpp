//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 6 (책) p.183
*  7번
*/

int main(void)
{
    int x, y;
    char z;
    int result;

    printf("비트 연산식?");
    scanf("%x %c %x", &x, &z, &y);

    switch (z) {
    case '&':
        result = x & y;
        printf("%6x & %6x = %6x", x, y, result);
        break;

    case '|':
        result = x | y;
        printf("%6x | %6x = %6x", x, y, result);
        break;

    case '^':
        result = x ^ y;
        printf("%6x ^ %6x = %6x", x, y, result);
        break;

    default:
        printf("에러");
        break;
    }

    return 0;
}