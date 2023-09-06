//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 4
* 원하는 배수의 합계를 구하는 계산기
*/

int main() {

    int i, x, y, mult;
    int sum = 0;

    printf("합계의 시작 값 ==> ");
    scanf("%d", &x);
    printf("합계의 끝 값 ==> ");
    scanf("%d", &y);
    printf("배수 ==> ");
    scanf("%d", &mult);

    for (i = x; i <= y; i++) {
        if (i % 4 != 0)
            continue;
        sum += i;

    }

    printf("%d부터 %d까지의 %d배수의 합계 ==> %d", x, y, mult, sum);
}