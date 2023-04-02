#include <stdio.h>
int main(void)
{
    int a = 1, b = 1, i, j;
    for(i = 0; i < 20; ++i)
    {
        for(j = 0; j < 20; ++j)
        {
            printf("%d-(%d/%d)*%d=%d\t\t\t", a, a, b, b, a-(a/b)*b);
            printf("%d%%%d=%d\n", a, b, a%b);
            ++b;
            if(a < b) break;
        }
        ++a;
        b = 1;
    }
    return 0;
}