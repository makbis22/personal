#include <stdio.h>

int main(void)
{
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("배열: ");
    for (i = 0; i < 10; i++)
        printf("%.1f ", arr[i]);
    printf("\n");

    for (i = 0; i < (int)(size / 2); i++) {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
/*
   double rev[10] = { 0 };
   for (i = 0; i < size ; i++) {
        rev[i]= arr[size-1-i];     
    }
*/
    printf("역순: ");
    for (i = 0; i < 10; i++)
        printf("%.1f ", arr[i]);
        //printf("%.1f ", rev[i]);
    printf("\n");
}