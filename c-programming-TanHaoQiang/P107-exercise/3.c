#include <stdio.h>
#include <stdint.h>
int main(void)
{
    int8_t a = 3, b = 4, c = 5, x = 0, y = 0;
    if(a+b>c&&b==c) puts("1");
    else puts("0");
    if(a||b+c&&b-c) puts("1");
    else puts("0");
    if(!(a>b)&&!c||1) puts("1");
    else puts("0");
    if(!(x=a)&&(y=b)&&0) puts("1");
    else puts("0");
    if(!(a+b)+c-1&&b+c/2) puts("1");
    else puts("0");
    return 0;
}