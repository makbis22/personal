//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 5 (책) p.183
*  6번
*/

int main(void)
{
    int kwh;
    int cost, use, kcost;

    printf("월 사용량(kWh)?");
    scanf("%d", &kwh);

    if (kwh <= 300) {
        cost = 1000;
        kcost = 100;
    }
    else {
        cost = 5000;
        kcost = 200;
    }
    use = 300 * 100 + (kwh - 300) * kcost;

    printf("전기 요금 합계 : %d원\n", use + cost);
    printf("- 기본요금 : %d원\n", cost);
    printf("- 전력량 요금 : %d원\n", use);
}