//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 4
* ���ϴ� ����� �հ踦 ���ϴ� ����
*/

int main() {

    int i, x, y, mult;
    int sum = 0;

    printf("�հ��� ���� �� ==> ");
    scanf("%d", &x);
    printf("�հ��� �� �� ==> ");
    scanf("%d", &y);
    printf("��� ==> ");
    scanf("%d", &mult);

    for (i = x; i <= y; i++) {
        if (i % 4 != 0)
            continue;
        sum += i;

    }

    printf("%d���� %d������ %d����� �հ� ==> %d", x, y, mult, sum);
}