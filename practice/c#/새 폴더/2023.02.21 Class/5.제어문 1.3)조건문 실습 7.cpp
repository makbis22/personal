//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 7
*  ��ǻ�Ϳ� ����� ����ϴ� ����, ����, �� ������ �ۼ�
*/

int main(void)
{
    srand(time(NULL));

    int x;
    int computer;

    computer = rand() % 3;

    printf("����(0), ����(1), ��(2)");
    scanf("%d", &x);

    if ((x + 1) % 3 == computer)
        printf("��ǻ�� �¸�\n");
    else if (x == computer)
        printf("���\n");
    else
        printf("����� �¸�\n");

    printf("%d", computer);
}