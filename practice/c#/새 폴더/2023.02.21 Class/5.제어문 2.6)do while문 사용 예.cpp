//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  2.6)do while�� ��� ��
*/

int main() {

    int x;

    printf("����?");
    scanf("%d", &x);

    do {                    //�ѹ��� ������ ������
        printf("%d ", x);
        x /= 2;
    } while (x > 0);
    printf("\n");
}