//2023.02.27 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 27
* 10. 구조체
*  3.1)(책) 연습문제 2번
*/

struct login_info {
	char ID[20];
	char Pass[20];
};

int main()
{
	struct login_info c1 = {};

	int i;
	
	printf("ID? ");
	scanf("%s", c1.ID);
	printf("PASS? ");
	scanf("%s", c1.Pass);

	int ID_Size = strlen(c1.ID);
	int Pass_Size = strlen(c1.Pass);

	printf("ID :");
	for (i = 0; i < ID_Size; i++) {
		printf("%c", tolower(c1.ID[i]));
	}
	printf("\n");

	printf("PW :");
	for (i = 0; i < Pass_Size; i++) {
		printf("*");
	}
}