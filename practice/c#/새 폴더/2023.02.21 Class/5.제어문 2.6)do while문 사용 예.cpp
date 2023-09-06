//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  2.6)do while문 사용 예
*/

int main() {

    int x;

    printf("정수?");
    scanf("%d", &x);

    do {                    //한번은 무조건 실행함
        printf("%d ", x);
        x /= 2;
    } while (x > 0);
    printf("\n");
}