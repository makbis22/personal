//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 5 (å) p.183
*  6��
*/

int main(void)
{
    int kwh;
    int cost, use, kcost;

    printf("�� ��뷮(kWh)?");
    scanf("%d", &kwh);

    if (kwh <= 300) {
        cost = 1000;
        kcost = 100;
    }
    else {
        cost = 5000;
        kcost = 200;
    }
    use = 300 * 100 + (kwh - 300) * kcost;

    printf("���� ��� �հ� : %d��\n", use + cost);
    printf("- �⺻��� : %d��\n", cost);
    printf("- ���·� ��� : %d��\n", use);
}