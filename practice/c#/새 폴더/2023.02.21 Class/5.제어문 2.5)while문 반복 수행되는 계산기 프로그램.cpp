//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 21
* 5. ���
*  2.5)while�� �ݺ� ����Ǵ� ���� ���α׷�
*/

int main() {

    double x, y;
    char op;
    double result = 0;
    char yesno = 'Y';

    while (yesno == 'Y' || yesno == 'y') {
        printf("���� ?");
        scanf("%lf %c %lf", &x, &op, &y);

        if (op == '+')
            result = x + y;
        else if (op == '-')
            result = x - y;
        else if (op == '*')
            result = x * y;
        else if (op == '/')
            result = x / y;
        else {
            printf("Error\n");
            return 1;
        }
        printf("%f %c %f = %f\n", x, op, y, result);

        printf("��� �Ͻðڽ��ϱ�?(Y(y)/N ");
        scanf(" %c", &yesno);
    }
}