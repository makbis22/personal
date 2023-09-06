//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  2.4)while문을 이용한 홀수 출력
*/

int main(void) {

    int i = 1;
    int num;

    printf("정수?");
    scanf("%d", &num);

    while (i <= num) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");

    return 0;
}