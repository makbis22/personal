//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  2.4)while���� �̿��� Ȧ�� ���
*/

int main(void) {

    int i = 1;
    int num;

    printf("����?");
    scanf("%d", &num);

    while (i <= num) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");

    return 0;
}