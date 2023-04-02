#include <stdio.h>
int main(void)
{
    int x = 1, y = 2, res1 = 0, res2 = 0, res3 = 0;
    res1 = x*y++;
    printf("x = %d, y = %d, res1 = %d\n", x, y, res1);
    res2 = (x)*(y++);
    // res3 = (x+y)++;
    printf("x = %d, y = %d, res2 = %d\n", x, y, res2, res3);
    return 0;
}