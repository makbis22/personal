//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 5
*  ����ڷκ��� 3���� ������ �Է� �޾� ���� ū ���� ã�� ���α׷�
*/

int main(void)
{
    int x, y, z;

    printf("3���� ������ �Է��Ͻÿ� :");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
        printf("���� ū ������ %d�̴�.", x);
    else if (y > x && y > z)
        printf("���� ū ������ %d�̴�.", y);
    else
        printf("���� ū ������ %d�̴�.", z);
}