#include <stdio.h>

int main(void)
{
    int scores[5][5] = {// �л� 1��� 4���� ����, �л��� ��� 5����
        {28,28,26,9},
        {30,27,30,10},
        {25,26,24,8},
        {18,22,22,5},
        {24,25,30,10}
    };
    double averages[5] = { 0 };
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            scores[i][4] += scores[i][j];
            averages[j] += scores[i][j];
        }
        averages[4] += scores[i][4];
    }
    for (j = 0; j < 5; j++)
        averages[j] /= 5;
    printf("               �߰�  �⸻  ����  �⼮  ����\n");
    for (i = 0; i < 5; i++) {
        printf("�� ��  %2d��: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%5d ", scores[i][j]);
        }
        printf("\n");
    }
    printf("�׸� ���:   ");
    for (j = 0; j < 5; j++)
        printf("%5.1f ", averages[j]);
    printf("\n");
}