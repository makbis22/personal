//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 2
*  시험 점수가 60점이상이면 합격 미만이면 불합격 표시, 60점 이상이면 장학금도
* 받는다고 출력
*/

int main(void)
{
    int Score;

    printf("성적을 입력");
    scanf("%d", &Score);

    if (Score >= 60) {
        printf("합격입니다\n");
        printf("장합금도 받을 수 있습니다.\n");
    }
    else
        printf("불합격 입니다\n");

}
