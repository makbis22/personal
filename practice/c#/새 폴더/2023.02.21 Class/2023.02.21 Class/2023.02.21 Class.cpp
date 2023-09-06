//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 21
* 5. 제어문
*  1.1)if를 이용한 계산기 프로그램
*/
/*
int main(void)
{
	double x, y;
	char op;
	double result = 0;

	printf("수식?");
	scanf("%lf %c %lf", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else {
		printf("잘못된 수식\n");
		return 1;
	}

	printf("%.2lf %c %.2lf = %f\n", x, op, y, result);
	
}
*/

 /*2023. 02. 21
 * 5. 제어문
 *  1.2)switch문을 이용한 메뉴 처리 프로그램
 */
/*
int main()
{
    int menu;

    printf("1. 파일열기\n");
    printf("2. 파일 편집\n");
    printf("3. 파일 저장\n");
    printf("선택\n");

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("파일 열기 메뉴 선택\n");
        break;
    case 2:
        printf("파일 편집 메뉴 선택\n");
        break;
    case 3:
        printf("파일 저장 메뉴 선택\n");
        break;
    default:
        printf("잘못 선택.\n");
        break;
    }
}
*/

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 1
*  입력 받은 온도가 0초과면 영상 0이하면 영상으로 출력
*/

//int main(void)
//{
//    int Temp;
//
//    printf("온도를 입력 : ");
//    scanf("%d", &Temp);
//
//    if (Temp > 0)
//        printf("영상의 날씨 입니다.\n");
//    else {
//        printf("영하의 날씨 입니다.\n");   
//    }
//}

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 2
*  시험 점수가 60점이상이면 합격 미만이면 불합격 표시, 60점 이상이면 장학금도
* 받는다고 출력
*/

//int main(void)
//{
//    int Score;
//
//    printf("성적을 입력");
//    scanf("%d", &Score);
//
//    if (Score >= 60) {
//        printf("합격입니다\n");
//        printf("장합금도 받을 수 있습니다.\n");
//    }
//    else
//        printf("불합격 입니다\n");
//
//}

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 3
*  두개의 정수를 입력받아 큰수와 작은수를 판별하여 출력하는 프로그램 작성
*/

//int main(void)
//{
//    int x, y;
//    int result;
//
//    printf("첫번째 수 =");
//    scanf("%d", &x);
//    printf("두번째 수 =");
//    scanf("%d", &y);
//
//    if (x > y ? 1 : 0){
//        printf("큰수 = %d\n", x);
//        printf("작은수 = %d\n", y);
//    }
//    else {
//        printf("큰수 = %d\n", y);
//        printf("작은수 = %d\n", x);
//    }
//}

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 4
*  동전을 던져 앞 뒤가 나오도록 프로그램
*/

//int main(void)
//{
//    srand(time(NULL));
//    int coin;
//
//    coin = rand();
//    
//    printf("%d", coin);
//    
//    if (coin % 2 == 0)
//        printf("앞면");
//    else if (coin % 2 == 1)
//        printf("뒷면");
//}

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 5
*  사용자로부터 3개의 정수를 입력 받아 가장 큰 수를 찾는 프로그램
*/

//int main(void)
//{
//    int x, y, z;
//
//    printf("3개의 정수를 입력하시오 :");
//    scanf("%d %d %d", &x, &y, &z);
//
//    if (x > y && x > z)
//        printf("가장 큰 정수는 %d이다.", x);
//    else if (y>x && y>z)
//        printf("가장 큰 정수는 %d이다.", y);
//    else
//        printf("가장 큰 정수는 %d이다.", z);
//}

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 6
*  달이 주어지면 그 달의 일수를 출력하는 프로그램
*/

//int main(void)
//{
//    int Month, Day;
//
//    printf("일수를 알고 싶은 달을 입력하시오 :");
//    scanf("%d", &Month);
//
//    switch (Month)
//    {
//    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        printf("31");
//        break;
//    case 4: case 6: case 9: case 11:
//        printf("30");
//        break;
//    case 2:
//        printf("28");
//        break;
//    default:
//        printf("잘못입력");
//        break;
//    }
//}

/*2023. 02. 21
* 5. 제어문
*  1.3)조건문 실습 7
*  컴퓨터와 사람이 대결하는 가위, 바위, 보 게임을 작성
*/

//int main(void)
//{
//    srand(time(null));
//
//    int x;
//    int computer;
//
//    computer = rand() % 3;
//
//    printf("가위(0), 바위(1), 보(2)");
//    scanf("%d", &x);
//
//    if ((x + 1) % 3 == computer)
//        printf("컴퓨터 승리\n");
//    else if (x == computer)
//        printf("비김\n");
//    else
//        printf("사용자 승리\n");
//    
//    printf("%d", computer);
//}

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 1 (책) p.182
*  2번
*/

//int main(void)
//{
//    int x, y;
//    double result;
//
//    printf("등수?");
//    scanf("%d", &x);
//    printf("전체 인원수?");
//    scanf("%d", &y);
//
//    result = ((double) x / y) * 100;
//
//    if (result <= 10)
//        printf("A");
//    else if (result <= 30)
//        printf("B");
//    else if (result <= 60)
//        printf("C");
//    else if (result <= 90)
//        printf("D");
//    else
//        printf("F");
//
//}

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 2 (책) p.182
*  3번
*/

//int main(void)
//{
//    int x, y;
//
//    printf("좌표 값 (x,y)입력 :");
//    scanf("%d %d", &x, &y);
//
//    if (x > 0 && y > 0)
//        printf("1사분면");
//    else if (x < 0 && y>0)
//        printf("2사분면");
//    else if (x < 0 && y < 0)
//        printf("3사분면");
//    else if (x > 0 && y < 0)
//        printf("4사분면");
//    else
//        printf("0");
//}

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 3 (책) p.183
*  4번
*/

//int main(void)
//{
//    int Year;
//
//    printf("연도 입력 : ");
//    scanf("%d", &Year);
//
//    if ((Year % 4 == 0) && ((Year % 100 != 0) || (Year % 400 == 0)))
//        printf("윤년");
//    else
//        printf("아님");
//}

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 4 (책) p.183
*  5번
*/

//int main(void)
//{
//    int temp;
//    char x;
//    double C, F;
//
//    printf("온도? :");
//    scanf("%d %c", &temp, &x);
//    
//    printf("%d\n", temp);
//    if (x == 0x43) {
//        F = (double)temp * 9 / 5 + 32;
//        printf("%d %c == %.2lfF", temp, x, F);
//    }
//    else if (x == 0x46) {
//        C = ((double)temp - 32) * 5 / 9;
//        printf("%d %c == %.2lfC", temp, x, C);
//    }
//    else
//        printf("잘못 입력");
//}

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 5 (책) p.183
*  6번
*/

//int main(void)
//{
//    int kwh;
//    int cost, use, kcost;
//
//    printf("월 사용량(kWh)?");
//    scanf("%d", &kwh);
//
//    if (kwh <= 300) {
//        cost = 1000;
//        kcost = 100;
//    }
//    else {
//        cost = 5000;
//        kcost = 200;
//    }
//    use = 300 * 100 + (kwh - 300) * kcost;
//
//    printf("전기 요금 합계 : %d원\n", use+cost);
//    printf("- 기본요금 : %d원\n", cost);
//    printf("- 전력량 요금 : %d원\n", use);
//}

/*2023. 02. 21
* 5. 제어문
*  1.4)조건문 실습 6 (책) p.183
*  7번
*/

//int main(void)
//{
//    int x, y;
//    char z;
//    int result;
//
//    printf("비트 연산식?");
//    scanf("%x %c %x", &x, &z, &y);
//
//    switch (z) {
//    case '&':
//        result = x & y;
//        printf("%6x & %6x = %6x", x, y, result);
//        break;
//
//    case '|':
//        result = x | y;
//        printf("%6x | %6x = %6x", x, y, result);
//        break;
//
//    case '^':
//        result = x ^ y;
//        printf("%6x ^ %6x = %6x", x, y, result);
//        break;
//
//    default:
//        printf("에러");
//        break;
//    }
//
//    return 0;
//}

/*2023. 02. 21
* 5. 제어문
*  2.1)반복문 for문 사용예
*/

//int main(void)
//{
//    int i;
//    int num;
//
//    for (i = 0; i < 5; i++)
//        printf("%d ", i);
//    printf("\n");
//
//    printf("정수?");
//    scanf("%d", &num);
//
//    for (i = num; i >= 0; i--)
//        printf("%d ", i);
//    printf("\n");
//}

/*2023. 02. 21
* 5. 제어문
*  2.2)for문 입력된 정수들의 합계 구하기
*/

//int main(void)
//{
//    int num;
//    int sum = 0;
//    int i;
//
//    printf("정수 5개를 입력하세요.");
//
//    for (i = 0; i < 5; i++) {
//        scanf("%d", &num);
//        sum += num;
//    }
//    printf("합계 : %d\n", sum);
//}

/*2023. 02. 21
* 5. 제어문
*  2.3)for문 입력된 문자로 직사각형 그리기
*/

//int main() {
//    int width, height;
//    char ch;
//    int i, j;
//
//    printf("직사각형의 폭과 높이? ");
//    scanf("%d %d", &width, &height);
//    printf("직사각형을 그릴 문자? ");
//    scanf(" %c", &ch);
//
//    for (i = 0; i < height; i++) {
//        for (j = 0; j < width; j++)
//            printf("%c", ch);
//        printf("\n");
//    }
//    return 0;
//}

/*2023. 02. 21
* 5. 제어문
*  2.4)while문을 이용한 홀수 출력
*/

//int main(void) {
//    
//    int i = 1;
//    int num;
//
//    printf("정수?");
//    scanf("%d", &num);
//
//    while (i <= num) {
//        printf("%d ", i);
//        i += 2;
//    }
//    printf("\n");
//
//return 0;
//}

/*2023. 02. 21
* 5. 제어문
*  2.5)while문 반복 수행되는 계산기 프로그램
*/

//int main() {
//
//    double x, y;
//    char op;
//    double result = 0;
//    char yesno = 'Y';
//
//    while (yesno == 'Y' || yesno == 'y') {
//        printf("수식 ?");
//        scanf("%lf %c %lf", &x, &op, &y);
//
//        if (op == '+')
//            result = x + y;
//        else if (op == '-')
//            result = x - y;
//        else if (op == '*')
//            result = x * y;
//        else if (op == '/')
//            result = x / y;
//        else {
//            printf("Error\n");
//            return 1;
//        }
//        printf("%f %c %f = %f\n", x, op, y, result);
//
//        printf("계속 하시겠습니까?(Y(y)/N ");
//        scanf(" %c", &yesno);
//    }
//}

/*2023. 02. 21
* 5. 제어문
*  2.6)do while문 사용 예
*/

//int main() {
//
//    int x;
//
//    printf("정수?");
//    scanf("%d", &x);
//
//    do {
//        printf("%d ", x);
//        x /= 2;
//    } while (x > 0);
//    printf("\n");
//}

/*2023. 02. 21
* 5. 제어문
*  2.7)break, continue 입력된 정수 중 홀 수 합 구하기
*/

//int main() {
//    
//    int num = 0, sum = 0;
//
//    while (1) {
//        printf("정수(음수 입력시 종료)? : ");
//        scanf("%d", &num);
//
//        if (num < 0)
//            break;
//        if (num % 2 == 0)
//            continue;
//        sum += num;
//
//    }
//    printf("홀수의 합계 : %d\n", sum);
//}

/*2023. 02. 21
* 5. 제어문
*  2.8)goto 사용 예
*/

//int main() {
//
//    int i;
//
//    for (i = 10; i > 0; i--) {
//        if (i % 3 == 0)
//            goto quit;
//        printf("%d", i);
//
//    }
//quit:
//    printf("\n");
//
//}

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 1
* 1~12345까지의 합계
*/
//1~12345까지의 합계
//int main() {
//
//    int i;
//    int sum = 0;
//
//    for (i = 1; i < 12346; i++)
//        sum += i;
//
//    printf("%d", sum);
//} 

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 2
*  1부터 100까지 중 3의 배수를 더하는 프로그램
*/


//int main() {
//
//    int i;
//    int sum = 0;
//    
//    for (i = 1; i < 101; i++) {
//        if (i % 3 != 0)
//            continue;
//        sum += i;
//        
//    }
//    printf("%d", sum);
//
//}

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 3
* 시작 값, 끝값, 증가 값을 입력받아 더하여 결과 출력
*/

//int main() {
//
//    int i, x, y, z;
//    int sum = 0;
//
//    printf("시작, 끝, 증가 값 입력 : ");
//    scanf("%d %d %d", &x, &y, &z);
//
//    for (i = x; i < y; i = i + z)
//        sum += i;
//
//    printf("%d", sum);
//}

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 4
* 원하는 배수의 합계를 구하는 계산기
*/

//int main() {
//
//    int i, x, y, mult;
//    int sum = 0;
//    
//    printf("합계의 시작 값 ==> ");
//    scanf("%d", &x);
//    printf("합계의 끝 값 ==> ");
//    scanf("%d", &y);
//    printf("배수 ==> ");
//    scanf("%d", &mult);
//
//    for (i = x; i <= y; i++) {
//        if (i % 4 != 0)
//            continue;
//        sum += i;
//        
//    }
//    
//    printf("%d부터 %d까지의 %d배수의 합계 ==> %d", x, y, mult, sum);
//}

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 5
* 랜덤 숫자 맞추기 게임
*/
//다시해 봐야함 do while로

//int main() {
//
//    srand(time(NULL));
//    int random;
//    int x = 0;
//    int i = 0;
//
//    random = rand() % 100;
//    printf("%d", random);
//    while (1) {
//        printf("정답을 추측하여 보세요 : ");
//        scanf("%d", &x);
//        i = i + 1;
//        if (x == random) {
//            printf("축하합니다. 시도횟수 : %d\n", i);
//            break;
//        }
//        else if (x > random)
//            printf("제시한 점수 보다 높습니다.\n");
//        else if (x < random)
//            printf("제시한 점수 보다 낮습니다.\n");
//        
//    }
//    
//}

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 6
*  x팩토리얼 구하기
*/

//int main() {
//
//    int i;
//    int x = 0;
//    int result = 1;
//
//    printf("정수를 입력하시오 : ");
//    scanf("%d", &x);
//
//    for (i = x; i > 0; i--) {
//        result *= i;
//    }
//    
//    printf("%d!은 %d입니다.", x, result);
//
//}

/*2023. 02. 21
* 5. 제어문
*  3.1)반복문 실습 7
*  입력한 숫자만큼 별표 출력하기
*/

int main() {
    int num, digit, i, j;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        for (i = 0; i < digit; i++) {
            printf("*");
        }
        printf("\n");
        num /= 10;
    }
    return 0;
}

//int main() {
//    int num, digit, i, j;
//    printf("Enter a number: ");
//    scanf("%d", &num);
//    while (num > 0) {
//        digit = num % 10;
//        for (i = 0; i < digit; i++) {
//            printf("*");
//        }
//        printf("\n");
//        num /= 10;
//    }
//    return 0;
//}

