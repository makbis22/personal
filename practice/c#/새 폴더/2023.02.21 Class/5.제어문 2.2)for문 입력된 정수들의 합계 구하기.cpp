//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  2.2)for문 입력된 정수들의 합계 구하기
*/

int main(void)
{
    int num;
    int sum = 0;
    int i;

    printf("정수 5개를 입력하세요.");

    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        sum += num;
    }
    printf("합계 : %d\n", sum);
}