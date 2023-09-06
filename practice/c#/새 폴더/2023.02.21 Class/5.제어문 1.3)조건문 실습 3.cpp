//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 3
*  두개의 정수를 입력받아 큰수와 작은수를 판별하여 출력하는 프로그램 작성
*/

int main(void)
{
    int x, y;
    int result;

    printf("첫번째 수 =");
    scanf("%d", &x);
    printf("두번째 수 =");
    scanf("%d", &y);

    if (x > y ? 1 : 0) {
        printf("큰수 = %d\n", x);
        printf("작은수 = %d\n", y);
    }
    else {
        printf("큰수 = %d\n", y);
        printf("작은수 = %d\n", x);
    }
}
