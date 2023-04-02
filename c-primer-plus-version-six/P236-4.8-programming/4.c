#include <stdio.h>
int main(void)
{
    char name[40];
	float height;
    printf("please input your name : ");
    scanf("%s", name);
    printf("please input your height (mm) : ");
    scanf("%f", &height);
    height /= 100.0F;
    printf("%s, you are %g meters tall.\n", name, height);
    return 0;
}