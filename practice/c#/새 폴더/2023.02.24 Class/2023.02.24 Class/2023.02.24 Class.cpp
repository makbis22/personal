#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. 포인터
*  1.1)포인터의 바이트 크기 구하기
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
* 8. 포인터
*  1.2)포인터의 사용
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
* 8. 포인터
*  1.3)포인터가 필요한 경우
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
//	printf("test1 호출 후 x = %d\n", x);		//x의 값 변경하지 않음
//
//	test2(&x);
//	printf("test2 호출 후 x = %d\n", x);		//x의 값 변경(직접 주소로 찾아가 변경하기 때문)
//}

/*2023. 02. 24
* 8. 포인터
*  1.4)포인터 + 정수 연산의 결과
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
* 8. 포인터
*  1.5)배열처럼 사용되는 포인터
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
* 8. 포인터
*  1.6)swap 함수의 구현
*  - 포인터를 이용해 주소에 저장된 값을 변경해 main함수에 변수의 내용을 변경하는 방법
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
* 8. 포인터
*  1.7)출력 매개변수를 갖는 함수
*  - 메인 변수의 주소를 함수로 선언해 메인함수의 변수 주소에 수식을 대입함
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
* 8. 포인터
*  1.8)배열을 매개변수로 갖는 함수(2)
*  - 전 내용의 주소의 내용 변경을 이용해 배열을 복사하는 방법
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