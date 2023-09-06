//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 5
* 랜덤 숫자 맞추기 게임
*/

int main() {

    srand(time(NULL));
    int random;
    int x = 0;
    int i = 0;

    random = rand() % 100;
    printf("%d", random);
    while (1) {
        printf("정답을 추측하여 보세요 : ");
        scanf("%d", &x);
        i = i + 1;
        if (x == random) {
            printf("축하합니다. 시도횟수 : %d\n", i);
            break;
        }
        else if (x > random)
            printf("제시한 점수 보다 높습니다.\n");
        else if (x < random)
            printf("제시한 점수 보다 낮습니다.\n");

    }

}