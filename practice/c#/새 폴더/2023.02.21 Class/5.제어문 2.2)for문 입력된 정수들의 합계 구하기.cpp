//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  2.2)for�� �Էµ� �������� �հ� ���ϱ�
*/

int main(void)
{
    int num;
    int sum = 0;
    int i;

    printf("���� 5���� �Է��ϼ���.");

    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        sum += num;
    }
    printf("�հ� : %d\n", sum);
}