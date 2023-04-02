#include <stdio.h>
int main(void)
{
    int m = 18, n = 12, min = 0, i = 0, flag = 0;
    min = m > n ? n : m;
    for(i = 1; i <= min; ++i)
		if( (0 == m%i) && (0 == n%i) ) flag = i;
    printf("最大公约数为 : %d\n", flag);
    return 0;
}
