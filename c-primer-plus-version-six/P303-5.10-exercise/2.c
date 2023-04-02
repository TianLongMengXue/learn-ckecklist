#include <stdio.h>
int main(void)
{
    int x;
    printf("x = (int)3.8 + 3.3 : %d\n", x = (int)3.8 + 3.3); // 6
    printf("x = (2 + 3) * 10.5 : %d\n", x = (2 + 3)*10.5); // 52
    printf("x = 3 / 5 * 22.0 : %d\n", x = 3/5*22.0); // 0
    printf("x = 22.0 * 3 / 5 : %d\n", x = 22.0*3/5); // 13
    return 0;
}