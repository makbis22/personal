//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 5
* ���� ���� ���߱� ����
*/

int main() {

    srand(time(NULL));
    int random;
    int x = 0;
    int i = 0;

    random = rand() % 100;
    printf("%d", random);
    while (1) {
        printf("������ �����Ͽ� ������ : ");
        scanf("%d", &x);
        i = i + 1;
        if (x == random) {
            printf("�����մϴ�. �õ�Ƚ�� : %d\n", i);
            break;
        }
        else if (x > random)
            printf("������ ���� ���� �����ϴ�.\n");
        else if (x < random)
            printf("������ ���� ���� �����ϴ�.\n");

    }

}