//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 6
*  달이 주어지면 그 달의 일수를 출력하는 프로그램
*/

int main(void)
{
    int Month, Day;

    printf("일수를 알고 싶은 달을 입력하시오 :");
    scanf("%d", &Month);

    switch (Month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31");
        break;
    case 4: case 6: case 9: case 11:
        printf("30");
        break;
    case 2:
        printf("28");
        break;
    default:
        printf("잘못입력");
        break;
    }
}