#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. �迭
*  2.1)(å p.266) �������� 1
*  7��
*/

//int main()
//{
//	double values[] = { 0.5, 0.125, 0.75, 1.05, 2.25, 3.75 };
//	int count = sizeof(values) / sizeof(values[0]);
//	int i;
//	
//	for (i = 0; i < count; i++) {
//		printf(" %.3f", values[i]);
//	}
//	return 0;
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.267) �������� 1
*  8��
*/

//int main(void) 
//{
//	int orders[] = { 3, 5, 1, 2, 2, 4, 3, 1, 1, 2 };
//	int sz = sizeof(orders) / sizeof(orders[0]);
//	int sum = 0;
//	int i;
//	for (i = 0; i < sz; i++) {
//		sum += orders[i];
//	}
//	printf("�հ� : %d\n", sum);
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.267) �������� 1
*  11��
*/

//int main()
//{
//	int gugu[9][9] = { 0 };
//	int i, j;
//	
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++) {
//			gugu[i-1][j-1] = i * j;		//gugu[0][0] ���� ���� �Ǳ� ���� (i=1,j=1���� ����)
//		}
//	}
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++) {
//			printf("%d * %d = %2d  ", i, j, gugu[i-1][j-1]);
//		}
//		printf("\n");
//	}
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.268) �������� 1
*  12��
*/

//int main()
//{
//	int x[4][3] = { { 1, 2, 3 }, { 4,5 }, { 6 } };
//	int i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			x[3][j] += x[i][j];
//		}
//	}
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%2d", x[i][j]);
//		}
//		printf("\n");
//	}
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.269) �������� 2 1��
*/

//int main()
//{
//	int First[10] = {};
//	int x;
//	int i;
//
//	printf("ù ��° ��?");
//	scanf("%d", &First[0]);
//
//	printf("����?");
//	scanf("%d", &x);
//
//	for (i = 1; i < 10; i++) {
//		First[i] = First[i - 1] + x;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf(" %d", First[i]);
//	}
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.269) �������� 2 1��
*/

//int main()
//{
//	int First[10] = {};
//	int x;
//	int i;
//
//	printf("ù ��° ��?");
//	scanf("%d", &First[0]);
//
//	printf("����?");
//	scanf("%d", &x);
//
//	for (i = 1; i < 10; i++) {
//		First[i] = First[i - 1] * x;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf(" %d", First[i]);
//	}
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.269) �������� 2 3��
*/

//int main()
//{
//	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
//	int i;
//	int max = arr[0], min = arr[0];
//
//	printf("�迭 :" );	//�迭 ���� ����
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 10; i++) {	//�ִ� �ּҰ� ���ϱ�
//		max = (max > arr[i]) ? max : arr[i];
//		min = (min < arr[i]) ? min : arr[i];
//	}
//
//	printf("�ִ� �� : %d\n", max);
//	printf("�ּ� �� : %d\n", min);
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.269) �������� 2 4��
*/

//int main()
//{
//	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
//	int i;
//	int serch;
//	int min;
//
//	printf("�迭 :");	//�迭 ���� ����
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	printf("ã�� ��?");
//	scanf("%d", &serch);
//
//
//	for (i = 9; i >= 0; i--) {	//�ڿ��� ���� ã�´�
//		if (serch == arr[i]) {
//			break;
//		}
//	}
//	printf("%d�� %d��° �����Դϴ�.\n", serch, i);
//	
//	return 0;
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 5��
*/

//int main()
//{
//	float x[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
//	int i;
//
//	printf("�迭 :");	//�迭 ���� ����
//	for (i = 0; i < 10; i++) {
//		printf("%.1f ", x[i]);
//	}
//	printf("\n");
//
//	printf("���� :");	//�������� ����
//	for (i = 9; i >= 0; i--) {
//		printf("%.1f ", x[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 6��
*/

//int main()
//{
//	int x[20] = {};
//	int i;
//	int num;
//	int size;
//
//	printf("�迭�� ���ҿ� ������ ��?");
//	scanf("%d", &num);
//
//	size = sizeof(x) / sizeof(x[0]);
//
//	for (i = 0; i < size; i++) {	//�迭�� ���� �� ����
//		x[i] = num;
//	}
//
//	for (i = 0; i < size; i++) {	//���Ұ� ����
//		printf("%d ", x[i]);
//	}
//	return 0;
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 7��
*/

//int main()
//{
//	float num[5] = {};
//	int i;
//	int size;
//	float sum = 0;
//
//	size = sizeof(num) / sizeof(num[0]);
//
//	printf("�Ǽ� 5���� �Է��ϼ���");
//	for (i = 0; i < size; i++) {	//�Ǽ� 5�� �Է� �޴� ����
//		scanf("%f", &num[i]);
//	}
//
//	for (i = 0; i < size; i++) {
//		sum += num[i];
//	}
//	printf("�հ� : %f", sum);
//
//	return 0;
//}

/*2023. 02. 23
* 7. �迭
*  2.2)(å p.270) �������� 2 8��
*/

//int main()
//{
//	int x[5] = {};
//	int dis;
//	int i;
//	int size;
//	int price = 0, result = 0;
//
//	size = sizeof(x) / sizeof(x[0]);
//
//	printf("��ǰ�� 5���� �Է��ϼ���");
//	for (i = 0; i < size; i++) {	//5�� �Է� �޴� ����
//		scanf("%d", &x[i]);
//	}
//	printf("������(%)");
//	scanf("%d", &dis);
//	
//	for (i = 0; i < size; i++) {	//���ݰ� ���ΰ� ���
//		price = x[i];
//		result = x[i] * ((100-(double)dis) / 100);
//		printf("����:%3d --> ���ΰ�: %3d\n", price, result);
//	}
//	return 0;
//}

