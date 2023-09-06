//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 1번
*/

struct login_info {
	char ID[20];
	char Pass[20];
};

int main()
{
	struct login_info c1 = {NULL , NULL};
	char ID[20];
	char Pass[20];

	int i;
	
	printf("ID? ");
	scanf("%s", ID);
	printf("PASS? ");
	scanf("%s", Pass);

	strcpy(c1.ID, ID);
	strcpy(c1.Pass, Pass);

	int Size = strlen(Pass);

	printf("ID : %s\n", c1.ID);
	printf("PW :");
	for (i = 0; i < Size; i++) {
		printf("*");
	}
}