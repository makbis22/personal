//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 6
*  ���� �־����� �� ���� �ϼ��� ����ϴ� ���α׷�
*/

int main(void)
{
    int Month, Day;

    printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ� :");
    scanf("%d", &Month);

    switch (Month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31");
        break;
    case 4: case 6: case 9: case 11:
        printf("30");
        break;
    case 2:
        printf("28");
        break;
    default:
        printf("�߸��Է�");
        break;
    }
}