#include <stdio.h>
#define length 8
int main(void)
{
    int number[length] = {0}, i = 0;
    while(i < length)
        scanf("%d", &number[i++]);
    for(i = length - 1; i >= 0; --i)
        printf("%d ", number[i]);
    printf("\n");
    return 0;
}