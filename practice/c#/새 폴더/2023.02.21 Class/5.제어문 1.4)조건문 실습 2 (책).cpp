//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 2 (å) p.182
*  3��
*/

int main(void)
{
    int x, y;

    printf("��ǥ �� (x,y)�Է� :");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1��и�");
    else if (x < 0 && y>0)
        printf("2��и�");
    else if (x < 0 && y < 0)
        printf("3��и�");
    else if (x > 0 && y < 0)
        printf("4��и�");
    else
        printf("0");
}