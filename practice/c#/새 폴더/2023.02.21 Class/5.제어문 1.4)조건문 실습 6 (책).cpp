//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 6 (å) p.183
*  7��
*/

int main(void)
{
    int x, y;
    char z;
    int result;

    printf("��Ʈ �����?");
    scanf("%x %c %x", &x, &z, &y);

    switch (z) {
    case '&':
        result = x & y;
        printf("%6x & %6x = %6x", x, y, result);
        break;

    case '|':
        result = x | y;
        printf("%6x | %6x = %6x", x, y, result);
        break;

    case '^':
        result = x ^ y;
        printf("%6x ^ %6x = %6x", x, y, result);
        break;

    default:
        printf("����");
        break;
    }

    return 0;
}