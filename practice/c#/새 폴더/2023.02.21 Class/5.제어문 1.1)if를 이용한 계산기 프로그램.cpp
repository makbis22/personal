//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. ���
*  1.1)if�� �̿��� ���� ���α׷�
*/

int main(void)
{
	double x, y;
	char op;
	double result = 0;

	printf("����?");
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
		printf("�߸��� ����\n");
		return 1;
	}

	printf("%.2lf %c %.2lf = %f\n", x, op, y, result);

}