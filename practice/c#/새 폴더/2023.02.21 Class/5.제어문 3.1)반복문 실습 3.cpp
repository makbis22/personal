//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 3
* ���� ��, ����, ���� ���� �Է¹޾� ���Ͽ� ��� ���
*/

int main() {

    int i, x, y, z;
    int sum = 0;

    printf("����, ��, ���� �� �Է� : ");
    scanf("%d %d %d", &x, &y, &z);

    for (i = x; i < y; i = i + z)
        sum += i;

    printf("%d", sum);
}