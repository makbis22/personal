//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 2. ���α׷��� �⺻
*  1.1)������ ���� �� ����
*/
/*
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
*/

/*2023. 02. 20
* 2. ���α׷��� �⺻
*  1.2)������ �Է¹޾� ���
*/
/*
int main(void)
{
	int age;
	float height;
	float weight;
	
	printf("����, Ű �����Ը� �Է��ϼ��� : ");
	scanf("%d %f %f", &age, &height, &weight);

	printf("����		: %5d\n", age);
	printf("Ű		: %5.1f\n", height);
	printf("������	: %5.1f\n", weight);
}
*/

/*2023. 02. 20
* 3. ���������� ����
*  1.1)���������� ����Ʈ ũ��
*/
/*
int main(void)
{
	printf("char�� ũ�� : %d\n,", sizeof(char));
	printf("char�� ũ�� : %d\n,", sizeof(short));
	printf("char�� ũ�� : %d\n,", sizeof(int));
	printf("char�� ũ�� : %d\n,", sizeof(float));
	printf("char�� ũ�� : %d\n,", sizeof(double));

	return 0;
}
*/

/*2023. 02. 20
* 3. ���������� ����
*  1.2)�Էµ� ������ ASCII�ڵ� ���
*/
/*
int main(void)
{
	char ch, prev_ch, next_ch;

	printf("����?");
	scanf("%c", &ch);

	prev_ch = ch - 1;
	next_ch = ch + 1;

	printf("prev_ch = %c, %d, %#02x\n", prev_ch, prev_ch, prev_ch);
	printf("ch	= %c, %d, %#02x\n", ch, ch, ch);
	printf("next_ch = %c, %d, %#02x\n", next_ch, next_ch, next_ch);

	return 0;
}
*/

/*2023. 02. 20
* 3. ���������� ����
*  1.3)���ͷ� ���
*/
/*
int main(void)
{
	printf("sizeof(\'x\') = %d\n", sizeof('x'));
}
*/

/*2023. 02. 20
* 4. ������
*  1.1)�������� ������ ���� ������
*/
/*
int main(void)
{
	int stock1 = 10, stock2 = 10;
	int current;

	current = --stock1;
	printf("current = %d, stock1 = %d\n", current, stock1);

	current = stock2--;
	printf("current = %d, stock2 = %d\n", current, stock2);
}
*/

/*2023. 02. 20
* 4. ������
*  1.2)���� ���� ������ ��� ��
*/
/*
int main(void)
{
	int w = 10, x = 20, y = 10, z = 7;
	int result = 0;

	result += w;
	printf("result = %d\n", result);

	result *= x;
	printf("result = %d\n", result);

	result /= y;
	printf("result = %d\n", result);

	result %= z;
	printf("result = %d\n", result);

	result *= 2+1;
	printf("result = %d\n", result);
}
*/

/*2023. 02. 20
* 4. ������
*  1.3)�� ������� �̿�
*/
/*
int main(void)
{
	int usage;

	printf("usage? ");
	scanf("%d", &usage);

	if (usage >= 1000 && usage <= 2000)
		printf("usage in range\n");

	if (usage < 1000 || usage > 2000)
		printf("out of rage\n");
}
*/
/*2023. 02. 20
* 4. ������
*  1.4)��Ʈ �� ������ ��� ��
*/
/*
int main(void)
{
	unsigned int x = 0xab;
	unsigned int y = 0x0f;

	printf("%08x & %08x = %08x\n", x, y, x & y);
	printf("%08x | %08x = %08x\n", x, y, x | y);
	printf("%08x ^ %08x = %08x\n", x, y, x ^ y);
	printf("~%08x = %08x\n", x, ~x);
}
*/

/*2023. 02. 20
* 4. ������
*  1.5)��Ʈ �̵� ������ ��� ��
*/
/*
int main(void)
{
	unsigned int x = 0xab;
	unsigned int z;

	printf("x = %#08x, %d\n", x, x);

	z = x >> 2;
	printf("z = %#08x, %d\n", z, z);

	z = x << 2;
	printf("z = %#08x, %d\n", z, z);
}
*/

/*2023. 02. 20
* 4. ������
*  1.6)���� �������� �̿� ��(1)
*/
/*
int main(void)
{
	int x, y;
	int abs, min, max;

	printf("Input tow number : ");
	scanf("%d %d", &x, &y);

	abs = x > 0 ? x : -x;
	printf("absolute value of x = %d\n", abs);

	abs = y > 0 ? y : -y;
	printf("absolute value of y = %d\n", abs);

	min = x < y ? x : y;
	printf("minimum value of x, y = %d\n", min);

	max = x > y ? x : y;
	printf("maximum value of x,y = %d\n", max);
}
*/

/*2023. 02. 20
* 4. ������
*  1.7)������� �� ��ȯ�� �ʿ��� ���
*/
/*
int main(void)
{
	int x, y;
	double ave;

	printf("2 num :");
	scanf("%d %d", &x, &y);

	ave = (x + y) / 2;
	printf("ave = %f\n", ave);

	ave = (double)(x + y) / 2;
	printf("ave = %f\n", ave);
}
*/

/*2023. 02. 20
* 4. ������
*  1.8)�������� �켱������ ���� ��Ģ
*/
/*
int main(void)
{
	int x = 5, y = 1, z = 15;
	int result;

	result = ++x * 2;
	printf("result = %d\n", result);

	result = x + 1 > 0;
	printf("result = %d\n", result);

	result = x << y;
	printf("result = %d\n", result);

	result = (x + y) / 2;
	printf("result = %d\n", result);

	result = x = y;
	printf("result = %x\n", result);
}
*/

/*2023. 02. 20
* 4. ������
*  1.8)���� ����
*/
/*2.�� ��뷮(kWh)�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	��뷮�� ���� ����� 190��/hWh�̴�.*/
/*
int main(void)
{
	int Month_W = 0;
	int Money;
	int kwh = 190;

	printf("�� ��뷮(kWh)�� �Է����ּ���. : ");
	scanf("%d", &Month_W);

	Money = Month_W * kwh;
	printf("���� ��� : %d\n", Money);
}
*/

/*3.�⺻ ��ݰ� �� ��뷮(kWh)�� �Է¹޾� �������� �Ի��ϴ� ���α׷��� �ۼ��Ͻÿ�.
	��뷮�� ���� ����� 190��/hWh�̴�.*/
/*
int main(void)
{
	int Month_W;
	int Basic_Money;
	int Money;
	int kwh = 190;

	printf("�⺻ ���? : ");
	scanf("%d", &Basic_Money);
	printf("�� ��뷮(kWh)�� �Է����ּ���. : ");
	scanf("%d", &Month_W);

	Money = Basic_Money + Month_W * kwh;
	printf("���� ��� : %d\n", Money);
}
*/

/*8. �������� ��� �ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ�
	���α׷��� �ۼ��Ͻÿ�.*/
/*
int main(void)
{
	int Play_Sec = 0;
	int Hour, Min, Sec;

	printf("��� �ð�(��)? :");
	scanf("%d", &Play_Sec);

	Hour = Play_Sec / 60 / 60;
	Min = (Play_Sec / 60) % 60;
	Sec = Play_Sec % 60;

	printf("��� �ð��� %d�ð� %d�� %d�� �Դϴ�.", Hour, Min, Sec);
}
*/

/*5. ȭ�� �µ�(F)�� �Ǽ��� �Է¹޾� �����µ�(C)�� ��ȯ�ؼ�
	����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
/*
int main(void)
{
	int F;
	double C;

	printf("ȭ�� �µ�? :");
	scanf("%d", &F);

	C = ((double)F - 32) * 5 / 9;

	printf("%d F = %.2f C", F, C);
}
*/

/*7. ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ�
	���α׷��� �ۼ��Ͻÿ�.*/
/*
int main(void)
{
	int a, b;
	double result;

	printf("��� ? ");
	scanf("%d", &a);

	printf("���� ? ");
	scanf("%d", &b);

	result = (b / (double)(a + b)) * 100;

	printf("�� : %.2f", result);
}
*/

/*11. 24��Ʈ Ʈ���÷��� ��Ÿ����```*/
int main(void)
{
	unsigned int red, green, blue = 0;
	unsigned int mask = 0xff;
	unsigned int RGB = 0;

	printf("red ? ");
	scanf("%d", &red);
	red &= mask;

	printf("green ? ");
	scanf("%d", &green);
	green &= mask;

	printf("blue ? ");
	scanf("%d", &blue);
	blue &= mask;

	RGB = red | (green << 8) | (blue << 16);
	printf("RGB ���� : %06x", RGB);
}