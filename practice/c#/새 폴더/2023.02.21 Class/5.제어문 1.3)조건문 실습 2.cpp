//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 2
*  ���� ������ 60���̻��̸� �հ� �̸��̸� ���հ� ǥ��, 60�� �̻��̸� ���бݵ�
* �޴´ٰ� ���
*/

int main(void)
{
    int Score;

    printf("������ �Է�");
    scanf("%d", &Score);

    if (Score >= 60) {
        printf("�հ��Դϴ�\n");
        printf("���ձݵ� ���� �� �ֽ��ϴ�.\n");
    }
    else
        printf("���հ� �Դϴ�\n");

}
