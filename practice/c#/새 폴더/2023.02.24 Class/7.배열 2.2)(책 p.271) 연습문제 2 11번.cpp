//2023.02.22 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2023. 02. 24
* 7. �迭
*  2.2)(å p.271) �������� 2 11��
*/

int main(void)
{
	int Music_List[10][10] = {};
	int Size = sizeof(Music_List) / sizeof(Music_List[0]);
	int i, j;

	printf("���� �� : ");
	for (j = 0; j < Size; j++) {
		for (i = 0; i < Size; i++) {
			Music_List[j][i] = rand() % 100;	//������ ���ڸ� 0~100���� 10x10��Ŀ� ����
		}
		printf("%2d ", Music_List[0][j]);
	}
	printf("\n");

	printf("���� �� : ");
	for (i = 0; i < Size; i++) {
		printf("%2d ", Music_List[i][rand() % 10]);		//�ߺ��� ������ ����
	}
	return 0;
}
