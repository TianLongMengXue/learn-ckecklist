#include <stdio.h>
int main(void)
{
    int x, y;
    printf("x = (2+3)*6 : %d\n", x = (2+3)*6); // 30
    printf("x = (12+6)/2*3 : %d\n", x = (12+6)/2*3); // 27
    printf("y = x = (2+3)/4 : %d\n", y = x = (2+3)/4); // 1
    printf("y = 3+2*(x = 7/2) : %d\n", y = 3+2*(x = 7/2)); // 9
    return 0;
}