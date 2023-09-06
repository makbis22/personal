#include <stdio.h>

int main(void)
{
    int scores[5][5] = {// 학생 1명당 4개의 성적, 학생은 모두 5명임
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
    printf("               중간  기말  팀플  출석  총점\n");
    for (i = 0; i < 5; i++) {
        printf("학 생  %2d번: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%5d ", scores[i][j]);
        }
        printf("\n");
    }
    printf("항목별 평균:   ");
    for (j = 0; j < 5; j++)
        printf("%5.1f ", averages[j]);
    printf("\n");
}