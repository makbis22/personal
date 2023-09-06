//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  2.7)break, continue 입력된 정수 중 홀 수 합 구하기
*/

int main() {

    int num = 0, sum = 0;

    while (1) {
        printf("정수(음수 입력시 종료)? : ");
        scanf("%d", &num);

        if (num < 0)
            break;
        if (num % 2 == 0)
            continue;
        sum += num;

    }
    printf("홀수의 합계 : %d\n", sum);
}