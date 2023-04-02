#include <stdio.h>
int main(void)
{
    float num;
    short i = 0;
    do{
        scanf("%f", &num);
    	printf("%f, %e, %g, %a", num, num, num, num);
        ++i;
    }while(i < 4);
    return 0;
}