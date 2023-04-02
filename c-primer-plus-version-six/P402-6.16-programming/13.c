#include <stdio.h>
#include <math.h>
#define length 8
int main(void)
{
    int number[length] = {0}, i = 0;
    for(i = 0; i < length; ++i)
        number[i] = pow(2, i+1);
    i = 0;
    do
    {
        printf("%d ", number[i]);
        ++i;
    }while(i < length);
    printf("\n");
    return 0;
}