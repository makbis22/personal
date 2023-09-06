//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 6
*  x팩토리얼 구하기
*/

int main() {

    int i;
    int x = 0;
    int result = 1;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    for (i = x; i > 0; i--) {
        result *= i;
    }

    printf("%d!은 %d입니다.", x, result);

}