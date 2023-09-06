//2023.02.21 Class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*2023. 02. 21
* 5. 제어문
*  1.2)switch문을 이용한 메뉴 처리 프로그램
*/

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
        print("잘못 선택.\n");
        break;
    }
}
