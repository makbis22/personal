//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 4
*  ������ ���� �� �ڰ� �������� ���α׷�
*/

int main(void)
{
    srand(time(NULL));
    int coin;

    coin = rand();

    printf("%d", coin);

    if (coin % 2 == 0)
        printf("�ո�");
    else if (coin % 2 == 1)
        printf("�޸�");
}