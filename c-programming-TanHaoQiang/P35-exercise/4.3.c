#include <stdio.h>
int main(void)
{
    int a = 15, b = 2, c = 5;
    if(a > b)
    {
        if(a > c)
        {
            if(b > c) printf("a=%d>b=%d>c=%d\n", a, b, c);
            else if(b < c) printf("a=%d>c=%d>b=%d\n", a, c, b);
            else if(b = c) printf("a=%d>b=%d=c=%d\n", a, b, c);
        }
        else if(a < c) printf("c=%d>a=%d>b=%d\n", c, a, b);
        else if(a == c) printf("a=%d=c=%d>b=%d\n", a, c, b);
    }
    else if(a < b)
    {
        if(b > c)
        {
            if(a > c) printf("b=%d>a=%d>c=%d\n", b, a, c);
            else if(a < c) printf("b=%d>c=%d>a=%d\n", b, c, a);
            else if(a == c) printf("b=%d>a=%d=c=%d\n", b, a, c);
        }
        else if(b < c) printf("c=%d>b=%d>a=%d\n", c, b, a);
        else if(b == c) printf("b=%d=c=%d>a=%d\n", b, c, a);
    }
    else if(a == b)
    {
        if(a > c) printf("a=%d=b=%d>c=%d\n", a, b, c);
        else if(a < c) printf("c=%d>a=%d=b=%d\n", c, a, b);
        else if(a == c) printf("a=%d=b=%d=c=%d\n", a, b, c);
    }
    return 0;
}