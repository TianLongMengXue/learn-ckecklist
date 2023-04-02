#include <stdio.h>
#define TEN 10
int main(void)
{
    int n = 0;
    while (n++ < TEN) // n < 10; ++n;
    	printf("%5d", n);
    printf("\n");
    return 0;
}