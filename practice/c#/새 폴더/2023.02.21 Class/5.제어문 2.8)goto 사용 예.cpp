//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. 제어문
*  2.8)goto 사용 예
*/

int main() {

    int i;

    for (i = 10; i > 0; i--) {
        if (i % 3 == 0)
            goto quit;
        printf("%d", i);

    }
quit:
    printf("\n");

}