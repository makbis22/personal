#include <stdio.h>

void print_matrix(int arr[][3])
{
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int x[3][3] = { 10,20,30,40,50,60,70,80,90 };
    int y[3][3] = { 9,8,7,6,5,4,3,2,1 };
    int z[3][3] = { 0 };
    int i, j;

    printf("x 행렬:\n");
    print_matrix(x);

    printf("y 행렬:\n");
    print_matrix(y);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            z[i][j] = x[i][j] + y[i][j];

    printf("x + y 행렬:\n");
    print_matrix(z);
}