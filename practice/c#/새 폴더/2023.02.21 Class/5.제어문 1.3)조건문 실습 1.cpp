//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 1
*  입력 받은 온도가 0초과면 영상 0이하면 영상으로 출력
*/

int main(void)
{
    int Temp;

    printf("온도를 입력 : ");
    scanf("%d", &Temp);

    if (Temp > 0)
        printf("영상의 날씨 입니다.\n");
    else {
        printf("영하의 날씨 입니다.\n");   
    }
}
