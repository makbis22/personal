//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 6. �Լ�
*  1.3)get_factorial �Լ��� ���� �� ȣ��
*/

int get_factorial(int num) {

    int i;
    int fact = 1;

    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {

    int i, x;

    printf("x ���丮�� :");
    scanf("%d", &x);

    for (i = 0; i <= x; i++) {
        printf("%2d! = %3d\n", i, get_factorial(i)); //get_factorial �Լ� ȣ��
    }                   //%2d�� %3d�� �տ� 2ĭ, 3ĭ�� ��ĭ�� �ǹ� 
    return 0;
}