#include <stdio.h>
int main(void)
{
    printf("30.0 / 4.0 * 5.0 : %f\n", 30.0 / 4.0 * 5.0); // 37.5
    printf("30.0 / (4.0 * 5.0) : %f\n", 30.0 / (4.0 * 5.0)); // 1.5
    printf("30 / 4 * 5 : %d\n", 30 / 4 * 5); // 35
    printf("30 * 5 / 4 : %d\n", 30 * 5 / 4); // 37
    printf("30 / 4.0 * 5 : %f\n", 30 / 4.0 * 5); // 37.5
    printf("30 / 4 * 5.0 : %f\n", 30 / 4 * 5.0); // 35.0
    return 0;
}