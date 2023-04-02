#include <stdio.h>
#define ITM 2.54
int main(void)
{
    double height;
    printf("please input the height of your body : ");
    scanf("%lf", &height);
    printf("the height of your body is %.2f MM\n", height * ITM);
    return 0;
}