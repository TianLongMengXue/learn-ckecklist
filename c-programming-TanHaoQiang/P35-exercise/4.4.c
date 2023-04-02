#include <stdio.h>
#define END 100
int main(void)
{
    int i = 1, sum = 1;
    while(i++ < END)
        sum += i;
    printf("1+2+3+···+100 = %d\n", sum);
    return 0;
}