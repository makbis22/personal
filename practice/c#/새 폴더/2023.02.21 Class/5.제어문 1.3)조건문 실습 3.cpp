//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 3
*  �ΰ��� ������ �Է¹޾� ū���� �������� �Ǻ��Ͽ� ����ϴ� ���α׷� �ۼ�
*/

int main(void)
{
    int x, y;
    int result;

    printf("ù��° �� =");
    scanf("%d", &x);
    printf("�ι�° �� =");
    scanf("%d", &y);

    if (x > y ? 1 : 0) {
        printf("ū�� = %d\n", x);
        printf("������ = %d\n", y);
    }
    else {
        printf("ū�� = %d\n", y);
        printf("������ = %d\n", x);
    }
}
