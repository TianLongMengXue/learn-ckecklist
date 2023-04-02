#include <stdio.h>
#include <stdint.h>
int main(void)
{
    double distance = 100, temp = 100;
    uint8_t i = 0;
    for(i = 1; i < 10; i++)
    {
        temp /= 2;
        distance += 2 * temp;
    }
    printf("distance = %.3f, height = %.3f\n", distance, temp);
    return 0;
}