//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 4. ������
*  1.3)�� ������� �̿�
*/

int main(void)
{
	int usage;

	printf("usage? ");
	scanf("%d", &usage);

	if (usage >= 1000 && usage <= 2000)
		prinf("usage in range\n");
	
	if (usage < 1000 || usage > 2000)
		printf("out of rage\n");
}