#include <stdio.h>
#define WEIGHT 3e-23
int main(void)
{
    double quark;
    printf("please input the weight of the water : ");
    scanf("%lf", &quark);
    printf("the weight of the water is %e\n", quark * 950 / WEIGHT);
    return 0;
}