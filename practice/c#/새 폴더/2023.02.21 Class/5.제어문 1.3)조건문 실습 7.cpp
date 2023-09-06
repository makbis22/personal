//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 7
*  컴퓨터와 사람이 대결하는 가위, 바위, 보 게임을 작성
*/

int main(void)
{
    srand(time(NULL));

    int x;
    int computer;

    computer = rand() % 3;

    printf("가위(0), 바위(1), 보(2)");
    scanf("%d", &x);

    if ((x + 1) % 3 == computer)
        printf("컴퓨터 승리\n");
    else if (x == computer)
        printf("비김\n");
    else
        printf("사용자 승리\n");

    printf("%d", computer);
}