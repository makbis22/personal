//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 3 (å) p.183
*  4��
*/

int main(void)
{
    int Year;

    printf("���� �Է� : ");
    scanf("%d", &Year);

    if ((Year % 4 == 0) && ((Year % 100 != 0) || (Year % 400 == 0)))
        printf("����");
    else
        printf("�ƴ�");

}