#include <stdio.h>
#include <float.h>
int main(void)
{
    float score = 0.0F;
    printf("Enter score: ");
    scanf("%f", &score);
    if(score < 0.0 || score > 100.0)
        printf("成绩输入有误!\n");
    else if(score <= FLT_EPSILON || score < 60)
        printf("E\n");
    else if(score < 70)
        printf("D\n");
    else if(score < 80)
        printf("C\n");
    else if(score < 90)
        printf("B\n");
    else
        printf("A\n");
    return 0;
}