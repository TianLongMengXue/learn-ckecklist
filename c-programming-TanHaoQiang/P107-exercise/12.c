#include <stdio.h>
#include <math.h>
#define HEIGHT 10
int main(void)
{
    double x, y;
    printf("Enter (x,y): ");
    scanf("%lf,%lf", &x, &y);
    x = fabs(x);
    y = fabs(y);
    if( (pow(x-2.0, 2)+pow(y-2.0, 2)) > 1 )
        printf("建筑物高度为 0\n");
    else
    	printf("建筑物高度位 10 米\n");
    return 0;
}