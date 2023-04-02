#include <stdio.h>
int main(void)
{
    float a, b, c, t;
    scanf("%f,%f,%f", &a, &b, &c);
    if(a>b)
    {
        t = a;
        a = b;
        b = t;
    } // 此时必有 a<b
    if(a > c)
    {
        t = a;
        a = c;
        c = t;
    } // 此时必有 a<c 且 a 为a, b, c中最小值
    if(b>c)
    {
        t = b;
        b = c;
        c = t;
    } // 此时必有 b<c 且有 a<b<c
    printf("%5.2f,%5.2f,%5.2f\n", a, b, c);
    return 0;
}