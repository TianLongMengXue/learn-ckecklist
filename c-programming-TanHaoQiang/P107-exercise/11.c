#include <stdio.h>
#include <stdint.h>
#define LENGTH 4
int main(void)
{
    int64_t number[4] = {0}, temp = 0;
    uint8_t i = 0, j = 0;
    printf("Enter 4 numbers：");
    for(i = 0; i < LENGTH; ++i)
        scanf("%d", number+i);
    for(i = 0; i < LENGTH - 1; ++i)
        for(j = 0; j < LENGTH - i; ++j)
            if(number[j] > number[j+1])
            {
                temp = number[j+1];
                number[j+1] = number[j];
                number[j] = temp;
            }
    for(i = 0; i < LENGTH; ++i)
        printf("%lld ", number[i]);
    printf("\n");
    return 0;
}