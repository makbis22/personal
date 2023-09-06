//first.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 20
* 2. 프로그램의 기본
*  1.1)변수의 선언 및 개념
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
* 2. 프로그램의 기본
*  1.2)변수를 입력받아 출력
*/
/*
int main(void)
{
	int age;
	float height;
	float weight;
	
	printf("나이, 키 몸무게를 입력하세요 : ");
	scanf("%d %f %f", &age, &height, &weight);

	printf("나이		: %5d\n", age);
	printf("키		: %5.1f\n", height);
	printf("몸무게	: %5.1f\n", weight);
}
*/

/*2023. 02. 20
* 3. 데이터형과 변수
*  1.1)데이터형의 바이트 크기
*/
/*
int main(void)
{
	printf("char의 크기 : %d\n,", sizeof(char));
	printf("char의 크기 : %d\n,", sizeof(short));
	printf("char의 크기 : %d\n,", sizeof(int));
	printf("char의 크기 : %d\n,", sizeof(float));
	printf("char의 크기 : %d\n,", sizeof(double));

	return 0;
}
*/

/*2023. 02. 20
* 3. 데이터형과 변수
*  1.2)입력된 문자의 ASCII코드 출력
*/
/*
int main(void)
{
	char ch, prev_ch, next_ch;

	printf("문자?");
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
* 3. 데이터형과 변수
*  1.3)리터럴 상수
*/
/*
int main(void)
{
	printf("sizeof(\'x\') = %d\n", sizeof('x'));
}
*/

/*2023. 02. 20
* 4. 연산자
*  1.1)전위형과 후위형 증감 연산자
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
* 4. 연산자
*  1.2)복합 대입 연산의 결과 값
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
* 4. 연산자
*  1.3)논리 연산식의 이용
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
* 4. 연산자
*  1.4)비트 논리 연산의 결과 값
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
* 4. 연산자
*  1.5)비트 이동 연산의 결과 값
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
* 4. 연산자
*  1.6)조건 연산자의 이용 예(1)
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
* 4. 연산자
*  1.7)명시적인 형 변환이 필요한 경우
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
* 4. 연산자
*  1.8)연산자의 우선순위와 결합 규칙
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
* 4. 연산자
*  1.8)연습 문제
*/
/*2.월 사용량(kWh)을 입력받아 전기 요금을 계산하는 프로그램을 작성하시오.
	사용량에 따른 요금은 190원/hWh이다.*/
/*
int main(void)
{
	int Month_W = 0;
	int Money;
	int kwh = 190;

	printf("월 사용량(kWh)를 입력해주세요. : ");
	scanf("%d", &Month_W);

	Money = Month_W * kwh;
	printf("전기 요금 : %d\n", Money);
}
*/

/*3.기본 요금과 월 사용량(kWh)을 입력받아 전기요금을 게산하는 프로그램을 작성하시오.
	사용량에 따른 요금은 190원/hWh이다.*/
/*
int main(void)
{
	int Month_W;
	int Basic_Money;
	int Money;
	int kwh = 190;

	printf("기본 요금? : ");
	scanf("%d", &Basic_Money);
	printf("월 사용량(kWh)를 입력해주세요. : ");
	scanf("%d", &Month_W);

	Money = Basic_Money + Month_W * kwh;
	printf("전기 요금 : %d\n", Money);
}
*/

/*8. 동영상의 재생 시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는
	프로그램을 작성하시오.*/
/*
int main(void)
{
	int Play_Sec = 0;
	int Hour, Min, Sec;

	printf("재생 시간(초)? :");
	scanf("%d", &Play_Sec);

	Hour = Play_Sec / 60 / 60;
	Min = (Play_Sec / 60) % 60;
	Sec = Play_Sec % 60;

	printf("재생 시간은 %d시간 %d분 %d초 입니다.", Hour, Min, Sec);
}
*/

/*5. 화씨 온도(F)를 실수로 입력받아 섭씨온도(C)로 변환해서
	출력하는 프로그램을 작성하시오.*/
/*
int main(void)
{
	int F;
	double C;

	printf("화씨 온도? :");
	scanf("%d", &F);

	C = ((double)F - 32) * 5 / 9;

	printf("%d F = %.2f C", F, C);
}
*/

/*7. 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 구하는
	프로그램을 작성하시오.*/
/*
int main(void)
{
	int a, b;
	double result;

	printf("용매 ? ");
	scanf("%d", &a);

	printf("용질 ? ");
	scanf("%d", &b);

	result = (b / (double)(a + b)) * 100;

	printf("농도 : %.2f", result);
}
*/

/*11. 24비트 트루컬러를 나타내는```*/
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
	printf("RGB 색상 : %06x", RGB);
}