//first.c
#include <stdio.h>

int main(void)
{
	int a = 10;
	float b = 1.23;
	char c = 'B';
	
	printf("%d, %x\n", a, a);
	printf("%f, %e\n", b, b);
	printf("%c\n", c);

	return 0;
}