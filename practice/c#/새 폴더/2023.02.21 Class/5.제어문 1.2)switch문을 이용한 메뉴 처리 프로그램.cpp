//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. ���
*  1.2)switch���� �̿��� �޴� ó�� ���α׷�
*/

int main() 
{
    int menu;

    printf("1. ���Ͽ���\n");
    printf("2. ���� ����\n");
    printf("3. ���� ����\n");
    printf("����\n");

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("���� ���� �޴� ����\n");
        break;
    case 2:
        printf("���� ���� �޴� ����\n");
        break;
    case 3:
        printf("���� ���� �޴� ����\n");
        break;
    default:
        print("�߸� ����.\n");
        break;
    }
}
