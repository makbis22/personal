#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. ������
*  1.1)�������� ����Ʈ ũ�� ���ϱ�
*/

//int main()
//{
//	int* pi;
//	double* pd;
//	char* pc;
//
//	printf("sizeof(pi) = %d \n", sizeof(pi));
//	printf("sizeof(pd) = %d \n", sizeof(pd));
//	printf("sizeof(pc) = %d \n", sizeof(pc));
//	printf("sizeof(int*) = %d \n", sizeof(int*));
//	printf("sizeof(double*) = %d \n", sizeof(double*));
//	printf("sizeof(char*) = %d \n", sizeof(char*));
//	
//	return 0;
//}

/*2023. 02. 24
* 8. ������
*  1.2)�������� ���
*/

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	printf("a = %d\n", a);
//	printf("&a = %p\n", &a);
//
//	printf("p = %p\n", p);
//	printf("*p = %p\n", *p);
//	printf("&p = %p\n", &p);
//
//	*p = 20;
//	printf("p = %d\n", *p);
//
//	return 0;
//}

/*2023. 02. 24
* 8. ������
*  1.3)�����Ͱ� �ʿ��� ���
*/

//void test1(int x)
//{
//	x = 20;
//}
//
//void test2(int* p)
//{
//	*p = 20;
//}
//
//int main()
//{
//	int x = 10;
//	test1(x);
//	printf("test1 ȣ�� �� x = %d\n", x);		//x�� �� �������� ����
//
//	test2(&x);
//	printf("test2 ȣ�� �� x = %d\n", x);		//x�� �� ����(���� �ּҷ� ã�ư� �����ϱ� ����)
//}

/*2023. 02. 24
* 8. ������
*  1.4)������ + ���� ������ ���
*/

//int main()
//{
//	int* p = (int*)0x100;
//	double* q = (double*)0x100;
//	char* r = (char*)0x100;
//
//	printf("int*	: %p, %p, %p\n", p, p + 1, p + 2);
//	printf("double*	: %p, %p, %p\n", q, q + 1, q + 2);
//	printf("char*	: %p, %p, %p\n", r, r + 1, r + 2);
//}

/*2023. 02. 24
* 8. ������
*  1.5)�迭ó�� ���Ǵ� ������
*/

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i;
//
//	for (i = 0; i < 5; i++) {
//		printf("p[%d] = %d\n", i, p[i]);
//	}
//}

/*2023. 02. 24
* 8. ������
*  1.6)swap �Լ��� ����
*  - �����͸� �̿��� �ּҿ� ����� ���� ������ main�Լ��� ������ ������ �����ϴ� ���
*/

//void swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//
//	printf("a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//}

/*2023. 02. 24
* 8. ������
*  1.7)��� �Ű������� ���� �Լ�
*  - ���� ������ �ּҸ� �Լ��� ������ �����Լ��� ���� �ּҿ� ������ ������
*/

//void get_sum_product(int x, int y, int* psum, int* pproduct)
//{
//	*psum = x + y;
//	*pproduct = x * y;
//}
//
//int main(void)
//{
//	int sum, product;
//	get_sum_product(123, 456, &sum, &product);
//	printf("sum = %d, product = %d\n", sum, product);
//	
//	return 0;
//}

/*2023. 02. 24
* 8. ������
*  1.8)�迭�� �Ű������� ���� �Լ�(2)
*  - �� ������ �ּ��� ���� ������ �̿��� �迭�� �����ϴ� ���
*/

//void copy_array(const int* source, int* target, int size)
//{
//	int i;
//	for (i = 0; i < size; i++) {
//		target[i] = source[i];
//	}
//}
//
//void print_array(const int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int x[5] = { 10, 20, 30, 40, 50 };
//	int y[5] = { 0 };
//
//	printf("x = ");
//	print_array(x, 5);
//
//	copy_array(x, y, 5);
//
//	printf("y = ");
//	print_array(y, 5);
//}