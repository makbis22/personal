#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  2.1)(책 p.266) 연습문제 1
*  7번
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
* 7. 배열
*  2.2)(책 p.267) 연습문제 1
*  8번
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
//	printf("합계 : %d\n", sum);
//}

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.267) 연습문제 1
*  11번
*/

//int main()
//{
//	int gugu[9][9] = { 0 };
//	int i, j;
//	
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++) {
//			gugu[i-1][j-1] = i * j;		//gugu[0][0] 부터 저장 되기 때문 (i=1,j=1부터 시작)
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
* 7. 배열
*  2.2)(책 p.268) 연습문제 1
*  12번
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
* 7. 배열
*  2.2)(책 p.269) 연습문제 2 1번
*/

//int main()
//{
//	int First[10] = {};
//	int x;
//	int i;
//
//	printf("첫 번째 항?");
//	scanf("%d", &First[0]);
//
//	printf("공차?");
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
* 7. 배열
*  2.2)(책 p.269) 연습문제 2 1번
*/

//int main()
//{
//	int First[10] = {};
//	int x;
//	int i;
//
//	printf("첫 번째 항?");
//	scanf("%d", &First[0]);
//
//	printf("공차?");
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
* 7. 배열
*  2.2)(책 p.269) 연습문제 2 3번
*/

//int main()
//{
//	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
//	int i;
//	int max = arr[0], min = arr[0];
//
//	printf("배열 :" );	//배열 내용 나열
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 10; i++) {	//최대 최소값 구하기
//		max = (max > arr[i]) ? max : arr[i];
//		min = (min < arr[i]) ? min : arr[i];
//	}
//
//	printf("최대 값 : %d\n", max);
//	printf("최소 값 : %d\n", min);
//}

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.269) 연습문제 2 4번
*/

//int main()
//{
//	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
//	int i;
//	int serch;
//	int min;
//
//	printf("배열 :");	//배열 내용 나열
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	printf("찾을 값?");
//	scanf("%d", &serch);
//
//
//	for (i = 9; i >= 0; i--) {	//뒤에서 부터 찾는다
//		if (serch == arr[i]) {
//			break;
//		}
//	}
//	printf("%d는 %d번째 원소입니다.\n", serch, i);
//	
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 5번
*/

//int main()
//{
//	float x[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
//	int i;
//
//	printf("배열 :");	//배열 내용 나열
//	for (i = 0; i < 10; i++) {
//		printf("%.1f ", x[i]);
//	}
//	printf("\n");
//
//	printf("역순 :");	//역순으로 정렬
//	for (i = 9; i >= 0; i--) {
//		printf("%.1f ", x[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 6번
*/

//int main()
//{
//	int x[20] = {};
//	int i;
//	int num;
//	int size;
//
//	printf("배열의 원소에 저장할 값?");
//	scanf("%d", &num);
//
//	size = sizeof(x) / sizeof(x[0]);
//
//	for (i = 0; i < size; i++) {	//배열에 원소 값 저장
//		x[i] = num;
//	}
//
//	for (i = 0; i < size; i++) {	//원소값 나열
//		printf("%d ", x[i]);
//	}
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 7번
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
//	printf("실수 5개를 입력하세요");
//	for (i = 0; i < size; i++) {	//실수 5개 입력 받는 구문
//		scanf("%f", &num[i]);
//	}
//
//	for (i = 0; i < size; i++) {
//		sum += num[i];
//	}
//	printf("합계 : %f", sum);
//
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  2.2)(책 p.270) 연습문제 2 8번
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
//	printf("상품가 5개를 입력하세요");
//	for (i = 0; i < size; i++) {	//5개 입력 받는 구문
//		scanf("%d", &x[i]);
//	}
//	printf("할인율(%)");
//	scanf("%d", &dis);
//	
//	for (i = 0; i < size; i++) {	//가격과 할인가 출력
//		price = x[i];
//		result = x[i] * ((100-(double)dis) / 100);
//		printf("가격:%3d --> 할인가: %3d\n", price, result);
//	}
//	return 0;
//}

