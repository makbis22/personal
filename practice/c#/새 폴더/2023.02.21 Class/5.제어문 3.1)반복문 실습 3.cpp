//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 3
* 시작 값, 끝값, 증가 값을 입력받아 더하여 결과 출력
*/

int main() {

    int i, x, y, z;
    int sum = 0;

    printf("시작, 끝, 증가 값 입력 : ");
    scanf("%d %d %d", &x, &y, &z);

    for (i = x; i < y; i = i + z)
        sum += i;

    printf("%d", sum);
}