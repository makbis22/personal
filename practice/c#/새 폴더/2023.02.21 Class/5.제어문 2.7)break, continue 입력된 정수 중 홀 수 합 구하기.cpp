//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  2.7)break, continue �Էµ� ���� �� Ȧ �� �� ���ϱ�
*/

int main() {

    int num = 0, sum = 0;

    while (1) {
        printf("����(���� �Է½� ����)? : ");
        scanf("%d", &num);

        if (num < 0)
            break;
        if (num % 2 == 0)
            continue;
        sum += num;

    }
    printf("Ȧ���� �հ� : %d\n", sum);
}