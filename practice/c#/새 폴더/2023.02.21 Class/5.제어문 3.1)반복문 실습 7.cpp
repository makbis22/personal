//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 7
*  �Է��� ���ڸ�ŭ ��ǥ ����ϱ�
*/

int main() {
    int num, digit, i, j;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        for (i = 0; i < digit; i++) {
            printf("*");
        }
        printf("\n");
        num /= 10;
    }
    return 0;
}