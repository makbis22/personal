//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2023. 02. 21
* 5. ���
*  1.1)if�� �̿��� ���� ���α׷�
*/
/*
int main(void)
{
	double x, y;
	char op;
	double result = 0;

	printf("����?");
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
		printf("�߸��� ����\n");
		return 1;
	}

	printf("%.2lf %c %.2lf = %f\n", x, op, y, result);
	
}
*/

 /*2023. 02. 21
 * 5. ���
 *  1.2)switch���� �̿��� �޴� ó�� ���α׷�
 */
/*
int main()
{
    int menu;

    printf("1. ���Ͽ���\n");
    printf("2. ���� ����\n");
    printf("3. ���� ����\n");
    printf("����\n");

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("���� ���� �޴� ����\n");
        break;
    case 2:
        printf("���� ���� �޴� ����\n");
        break;
    case 3:
        printf("���� ���� �޴� ����\n");
        break;
    default:
        printf("�߸� ����.\n");
        break;
    }
}
*/

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 1
*  �Է� ���� �µ��� 0�ʰ��� ���� 0���ϸ� �������� ���
*/

//int main(void)
//{
//    int Temp;
//
//    printf("�µ��� �Է� : ");
//    scanf("%d", &Temp);
//
//    if (Temp > 0)
//        printf("������ ���� �Դϴ�.\n");
//    else {
//        printf("������ ���� �Դϴ�.\n");   
//    }
//}

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 2
*  ���� ������ 60���̻��̸� �հ� �̸��̸� ���հ� ǥ��, 60�� �̻��̸� ���бݵ�
* �޴´ٰ� ���
*/

//int main(void)
//{
//    int Score;
//
//    printf("������ �Է�");
//    scanf("%d", &Score);
//
//    if (Score >= 60) {
//        printf("�հ��Դϴ�\n");
//        printf("���ձݵ� ���� �� �ֽ��ϴ�.\n");
//    }
//    else
//        printf("���հ� �Դϴ�\n");
//
//}

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 3
*  �ΰ��� ������ �Է¹޾� ū���� �������� �Ǻ��Ͽ� ����ϴ� ���α׷� �ۼ�
*/

//int main(void)
//{
//    int x, y;
//    int result;
//
//    printf("ù��° �� =");
//    scanf("%d", &x);
//    printf("�ι�° �� =");
//    scanf("%d", &y);
//
//    if (x > y ? 1 : 0){
//        printf("ū�� = %d\n", x);
//        printf("������ = %d\n", y);
//    }
//    else {
//        printf("ū�� = %d\n", y);
//        printf("������ = %d\n", x);
//    }
//}

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 4
*  ������ ���� �� �ڰ� �������� ���α׷�
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
//        printf("�ո�");
//    else if (coin % 2 == 1)
//        printf("�޸�");
//}

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 5
*  ����ڷκ��� 3���� ������ �Է� �޾� ���� ū ���� ã�� ���α׷�
*/

//int main(void)
//{
//    int x, y, z;
//
//    printf("3���� ������ �Է��Ͻÿ� :");
//    scanf("%d %d %d", &x, &y, &z);
//
//    if (x > y && x > z)
//        printf("���� ū ������ %d�̴�.", x);
//    else if (y>x && y>z)
//        printf("���� ū ������ %d�̴�.", y);
//    else
//        printf("���� ū ������ %d�̴�.", z);
//}

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 6
*  ���� �־����� �� ���� �ϼ��� ����ϴ� ���α׷�
*/

//int main(void)
//{
//    int Month, Day;
//
//    printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ� :");
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
//        printf("�߸��Է�");
//        break;
//    }
//}

/*2023. 02. 21
* 5. ���
*  1.3)���ǹ� �ǽ� 7
*  ��ǻ�Ϳ� ����� ����ϴ� ����, ����, �� ������ �ۼ�
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
//    printf("����(0), ����(1), ��(2)");
//    scanf("%d", &x);
//
//    if ((x + 1) % 3 == computer)
//        printf("��ǻ�� �¸�\n");
//    else if (x == computer)
//        printf("���\n");
//    else
//        printf("����� �¸�\n");
//    
//    printf("%d", computer);
//}

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 1 (å) p.182
*  2��
*/

//int main(void)
//{
//    int x, y;
//    double result;
//
//    printf("���?");
//    scanf("%d", &x);
//    printf("��ü �ο���?");
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
* 5. ���
*  1.4)���ǹ� �ǽ� 2 (å) p.182
*  3��
*/

//int main(void)
//{
//    int x, y;
//
//    printf("��ǥ �� (x,y)�Է� :");
//    scanf("%d %d", &x, &y);
//
//    if (x > 0 && y > 0)
//        printf("1��и�");
//    else if (x < 0 && y>0)
//        printf("2��и�");
//    else if (x < 0 && y < 0)
//        printf("3��и�");
//    else if (x > 0 && y < 0)
//        printf("4��и�");
//    else
//        printf("0");
//}

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 3 (å) p.183
*  4��
*/

//int main(void)
//{
//    int Year;
//
//    printf("���� �Է� : ");
//    scanf("%d", &Year);
//
//    if ((Year % 4 == 0) && ((Year % 100 != 0) || (Year % 400 == 0)))
//        printf("����");
//    else
//        printf("�ƴ�");
//}

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 4 (å) p.183
*  5��
*/

//int main(void)
//{
//    int temp;
//    char x;
//    double C, F;
//
//    printf("�µ�? :");
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
//        printf("�߸� �Է�");
//}

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 5 (å) p.183
*  6��
*/

//int main(void)
//{
//    int kwh;
//    int cost, use, kcost;
//
//    printf("�� ��뷮(kWh)?");
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
//    printf("���� ��� �հ� : %d��\n", use+cost);
//    printf("- �⺻��� : %d��\n", cost);
//    printf("- ���·� ��� : %d��\n", use);
//}

/*2023. 02. 21
* 5. ���
*  1.4)���ǹ� �ǽ� 6 (å) p.183
*  7��
*/

//int main(void)
//{
//    int x, y;
//    char z;
//    int result;
//
//    printf("��Ʈ �����?");
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
//        printf("����");
//        break;
//    }
//
//    return 0;
//}

/*2023. 02. 21
* 5. ���
*  2.1)�ݺ��� for�� ��뿹
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
//    printf("����?");
//    scanf("%d", &num);
//
//    for (i = num; i >= 0; i--)
//        printf("%d ", i);
//    printf("\n");
//}

/*2023. 02. 21
* 5. ���
*  2.2)for�� �Էµ� �������� �հ� ���ϱ�
*/

//int main(void)
//{
//    int num;
//    int sum = 0;
//    int i;
//
//    printf("���� 5���� �Է��ϼ���.");
//
//    for (i = 0; i < 5; i++) {
//        scanf("%d", &num);
//        sum += num;
//    }
//    printf("�հ� : %d\n", sum);
//}

/*2023. 02. 21
* 5. ���
*  2.3)for�� �Էµ� ���ڷ� ���簢�� �׸���
*/

//int main() {
//    int width, height;
//    char ch;
//    int i, j;
//
//    printf("���簢���� ���� ����? ");
//    scanf("%d %d", &width, &height);
//    printf("���簢���� �׸� ����? ");
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
* 5. ���
*  2.4)while���� �̿��� Ȧ�� ���
*/

//int main(void) {
//    
//    int i = 1;
//    int num;
//
//    printf("����?");
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
* 5. ���
*  2.5)while�� �ݺ� ����Ǵ� ���� ���α׷�
*/

//int main() {
//
//    double x, y;
//    char op;
//    double result = 0;
//    char yesno = 'Y';
//
//    while (yesno == 'Y' || yesno == 'y') {
//        printf("���� ?");
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
//        printf("��� �Ͻðڽ��ϱ�?(Y(y)/N ");
//        scanf(" %c", &yesno);
//    }
//}

/*2023. 02. 21
* 5. ���
*  2.6)do while�� ��� ��
*/

//int main() {
//
//    int x;
//
//    printf("����?");
//    scanf("%d", &x);
//
//    do {
//        printf("%d ", x);
//        x /= 2;
//    } while (x > 0);
//    printf("\n");
//}

/*2023. 02. 21
* 5. ���
*  2.7)break, continue �Էµ� ���� �� Ȧ �� �� ���ϱ�
*/

//int main() {
//    
//    int num = 0, sum = 0;
//
//    while (1) {
//        printf("����(���� �Է½� ����)? : ");
//        scanf("%d", &num);
//
//        if (num < 0)
//            break;
//        if (num % 2 == 0)
//            continue;
//        sum += num;
//
//    }
//    printf("Ȧ���� �հ� : %d\n", sum);
//}

/*2023. 02. 21
* 5. ���
*  2.8)goto ��� ��
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
* 5. ���
*  3.1)�ݺ��� �ǽ� 1
* 1~12345������ �հ�
*/
//1~12345������ �հ�
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
* 5. ���
*  3.1)�ݺ��� �ǽ� 2
*  1���� 100���� �� 3�� ����� ���ϴ� ���α׷�
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
* 5. ���
*  3.1)�ݺ��� �ǽ� 3
* ���� ��, ����, ���� ���� �Է¹޾� ���Ͽ� ��� ���
*/

//int main() {
//
//    int i, x, y, z;
//    int sum = 0;
//
//    printf("����, ��, ���� �� �Է� : ");
//    scanf("%d %d %d", &x, &y, &z);
//
//    for (i = x; i < y; i = i + z)
//        sum += i;
//
//    printf("%d", sum);
//}

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 4
* ���ϴ� ����� �հ踦 ���ϴ� ����
*/

//int main() {
//
//    int i, x, y, mult;
//    int sum = 0;
//    
//    printf("�հ��� ���� �� ==> ");
//    scanf("%d", &x);
//    printf("�հ��� �� �� ==> ");
//    scanf("%d", &y);
//    printf("��� ==> ");
//    scanf("%d", &mult);
//
//    for (i = x; i <= y; i++) {
//        if (i % 4 != 0)
//            continue;
//        sum += i;
//        
//    }
//    
//    printf("%d���� %d������ %d����� �հ� ==> %d", x, y, mult, sum);
//}

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 5
* ���� ���� ���߱� ����
*/
//�ٽ��� ������ do while��

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
//        printf("������ �����Ͽ� ������ : ");
//        scanf("%d", &x);
//        i = i + 1;
//        if (x == random) {
//            printf("�����մϴ�. �õ�Ƚ�� : %d\n", i);
//            break;
//        }
//        else if (x > random)
//            printf("������ ���� ���� �����ϴ�.\n");
//        else if (x < random)
//            printf("������ ���� ���� �����ϴ�.\n");
//        
//    }
//    
//}

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 6
*  x���丮�� ���ϱ�
*/

//int main() {
//
//    int i;
//    int x = 0;
//    int result = 1;
//
//    printf("������ �Է��Ͻÿ� : ");
//    scanf("%d", &x);
//
//    for (i = x; i > 0; i--) {
//        result *= i;
//    }
//    
//    printf("%d!�� %d�Դϴ�.", x, result);
//
//}

/*2023. 02. 21
* 5. ���
*  3.1)�ݺ��� �ǽ� 7
*  �Է��� ���ڸ�ŭ ��ǥ ����ϱ�
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

