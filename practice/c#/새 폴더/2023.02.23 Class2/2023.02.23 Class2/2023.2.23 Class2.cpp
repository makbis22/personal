//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 23
* 7. 배열
*  1.1)배열의 크기 구하기
*/

//int main(void) {
//
//	int arr[5];
//	int size = 0;
//	int i;
//
//	printf("배열 바이트 크기 : %d\n", sizeof(arr));
//
//	size = sizeof(arr) / sizeof(arr[0]);
//
//	printf("배열의 크기 : %d\n", size);
//
//	for (i = 0; i < size; i++) {
//		arr[i] = i;
//	}
//
//	for (i = 0; i < size; i++) {
//		printf(" %d", arr[i]);
//	}
//
//	printf("\n");
//
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  1.2)배열의 초기화
*/

//int main() {
//
//	int arr[ARR_SIZE] = { 1,2,3,4,5 };
//	int x[ARR_SIZE] = { 1,2,3 };
//	int y[ARR_SIZE] = { 0 };
//	int z[] = { -1,0,1 };
//	int i, size;
//
//	printf("arr = ");
//	for (i = 0; i < ARR_SIZE; i++) {
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//
//	printf("x	=");
//	for (i = 0; i < ARR_SIZE; i++) {
//		printf("%3d", x[i]);
//	}
//	printf("\n");
//
//	printf("y	=");
//	for (i = 0; i < ARR_SIZE; i++) {
//		printf("%3d", y[i]);
//	}
//	printf("\n");
//
//	printf("z	=");
//	size = sizeof(z) / sizeof(z[0]);	//배열의 size를 구하기위해
//	for (i = 0; i < size; i++) {	//위 size를 이용해 배열크기 만큼의 배열 내용 찾음
//		printf("%3d", z[i]);
//	}
//	printf("\n");
//}

/*2023. 02. 23
* 7. 배열
*  1.3)배열 원소의 사용 (절대 값 함수)
*/

//unsigned int absolute(int x) {
//
//	return x > 0 ? x : -x;
//}
//
//int main() {
//
//	int x[5] = { -4,0,28,3,-12 };
//	unsigned int y[ARR_SIZE] = { 0 };
//	int i;
//
//	for (i = 0; i < ARR_SIZE; i++) {
//		y[i] = absolute(x[i]);
//	}
//
//	for (i = 0; i < ARR_SIZE; i++) {
//		printf("% d", y[i]);
//	}
//	printf("\n");
//}

/*2023. 02. 23
* 7. 배열
*  1.4)피보나치 수열
*/

//int main() {
//
//	int arr[10] = { 1,1 };
//	int i;
//
//	printf("arr = ");
//
//	for (i = 2; i < 10; i++) {
//		arr[i] = arr[i - 2] + arr[i - 1];
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("% d", arr[i]);
//	}
//	printf("\n");
//
//	printf("arr[10] = %d\n", arr[10]);	//잘못된 인덱스 arr[0~9까지]
//	
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  1.5)배열의 복사
*/

//int main(void) {
//
//	int x[ARR_SIZE] = { 10,20,30,40,50 };
//	int y[ARR_SIZE] = { 0 };
//	int i;
//
//	for (i = 0; i < ARR_SIZE; i++) {
//		y[i] = x[i];
//	}
//	for (i = 0; i < ARR_SIZE; i++) {
//		printf("%d ", y[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  1.6)배열의 비교
*/

//int main(void) {
//
//	int x[ARR_SIZE] = { 10,20,30,40,50 };
//	int y[ARR_SIZE] = { 10,20,30,40,50 };
//	int i;
//	int is_equal;	//같은 배열인지 나타내는 변수
//
//	if (x == y){
//		printf("두 배열의 주소가 같습니다.\n");
//	}
//	else {
//		printf("두 배열의 주소가 다릅니다.\n");
//	}
//
//	is_equal = 1;
//
//	for (i = 0; i < ARR_SIZE; i++) {
//		if (x[i] != y[i]) {
//			is_equal = 0;
//			break;
//		}
//	}
//
//	if (is_equal == 1) {
//		printf("두 배열의 내용이 같습니다.\n");
//	}
//	else {
//		printf("두 배열의 내용이 다릅니다\n");
//	}
//
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  1.7)2차원 배열의 선언 및 사용
*/

//int main()
//{
//	int data[3][2];
//	int i, j, k;
//
//	for (i = 0, k = 0; i < 3; i++) {
//		for (j = 0; j < 2; j++) {
//			data[i][j] = ++k;
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 2; j++) {
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//	printf("sizeof(data)		=%d\n", sizeof(data));
//	printf("sizeof(data[0])		=%d\n", sizeof(data[0]));
//	printf("sizeof(data[0][0])	=%d\n", sizeof(data[0][0]));
//
//	return 0;
//}

/*2023. 02. 23
* 7. 배열
*  1.8)2차원 배열의 초기화
*/

//int main()
//{
//	int data[][2] = {
//		{10,20}, {30,40}, {50,60}
//	};
//	int row_size = sizeof(data) / sizeof(data[0]);	//24byte / 8byte (data[0] = {x,y})
//	int i, j;
//
//	for (i = 0; i < row_size; i++) {
//		for (j = 0; j < 2; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//}

/*2023. 02. 23
* 7. 배열
*  1.9)배열의 출력
*/

//void print_array(int arr[], int size);
//
//int main()
//{
//	int data[3] = { 10,20,30 };
//	int x[] = { 1,2,3,4,5 };
//	int size = sizeof(x) / sizeof(x[0]);
//
//	printf("data = ");
//	print_array(data, 3);
//
//	printf("x = ");
//	print_array(x, size);
//
//	printf("x = ");
//	print_array(x, 3);
//
//	return 0;
//}
//
//void print_array(int arr[], int size)
//{
//	int i;
//	
//	for (i = 0; i < size; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}

/*2023. 02. 23
* 7. 배열
*  1.10)배열의 탐색
*/

//void print_array(int arr[], int size)
//{
//	int i;
//	
//	for (i = 0; i < size; i++) {
//		printf(" %d", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int data[] = { 12,34,51,22,91,12,15 };
//	int size, i;
//	int key;
//
//	size = sizeof(data) / sizeof(data[0]);
//
//	printf("data = ");
//	print_array(data, size);
//
//	printf("찾을 값(키)?");
//	scanf("%d", &key);
//	
//	for (i = 0; i < size; i++) {
//		if (data[i] == key) {
//			printf("찾은 원소의 인덱스 : %d\n", i);
//		}
//	}
//	return 0;
//}