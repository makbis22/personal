//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 6
*  x���丮�� ���ϱ�
*/

int main() {

    int i;
    int x = 0;
    int result = 1;

    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &x);

    for (i = x; i > 0; i--) {
        result *= i;
    }

    printf("%d!�� %d�Դϴ�.", x, result);

}