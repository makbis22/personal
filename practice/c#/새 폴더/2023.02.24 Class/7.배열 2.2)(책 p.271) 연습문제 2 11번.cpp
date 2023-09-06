//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 7. 배열
*  2.2)(책 p.271) 연습문제 2 11번
*/

int main(void)
{
	int Music_List[10][10] = {};
	int Size = sizeof(Music_List) / sizeof(Music_List[0]);
	int i, j;

	printf("셔플 전 : ");
	for (j = 0; j < Size; j++) {
		for (i = 0; i < Size; i++) {
			Music_List[j][i] = rand() % 100;	//랜덤한 숫자를 0~100까지 10x10행렬에 넣음
		}
		printf("%2d ", Music_List[0][j]);
	}
	printf("\n");

	printf("셔플 후 : ");
	for (i = 0; i < Size; i++) {
		printf("%2d ", Music_List[i][rand() % 10]);		//중복도 나오기 위해
	}
	return 0;
}
