//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 8. 포인터
*  1.7)출력 매개변수를 갖는 함수
*  - 메인 변수의 주소를 함수로 선언해 메인함수의 변수 주소에 수식을 대입함
*/

void get_sum_product(int x, int y, int* psum, int* pproduct)
{
	*psum = x + y;
	*pproduct = x * y;
}

int main(void)
{
	int sum, product;
	get_sum_product(123, 456, &sum, &product);
	printf("sum = %d, product = %d\n", sum, product);

	return 0;
}
