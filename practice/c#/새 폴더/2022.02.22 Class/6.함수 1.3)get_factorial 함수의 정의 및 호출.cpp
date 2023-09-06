//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. 함수
*  1.3)get_factorial 함수의 정의 및 호출
*/

int get_factorial(int num) {

    int i;
    int fact = 1;

    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {

    int i, x;

    printf("x 팩토리얼 :");
    scanf("%d", &x);

    for (i = 0; i <= x; i++) {
        printf("%2d! = %3d\n", i, get_factorial(i)); //get_factorial 함수 호출
    }                   //%2d나 %3d는 앞에 2칸, 3칸이 빈칸을 의미 
    return 0;
}