//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 3 (책) p.183
*  4번
*/

int main(void)
{
    int Year;

    printf("연도 입력 : ");
    scanf("%d", &Year);

    if ((Year % 4 == 0) && ((Year % 100 != 0) || (Year % 400 == 0)))
        printf("윤년");
    else
        printf("아님");

}