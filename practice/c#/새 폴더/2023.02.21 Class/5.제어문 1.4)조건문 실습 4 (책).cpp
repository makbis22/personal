//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 4 (å) p.183
*  5��
*/

int main(void)
{
    int temp;
    char x;
    double C, F;

    printf("�µ�? :");
    scanf("%d %c", &temp, &x);

    printf("%d\n", temp);
    if (x == 0x43) {
        F = (double)temp * 9 / 5 + 32;
        printf("%d %c == %.2lfF", temp, x, F);
    }
    else if (x == 0x46) {
        C = ((double)temp - 32) * 5 / 9;
        printf("%d %c == %.2lfC", temp, x, C);
    }
    else
        printf("�߸� �Է�");
}