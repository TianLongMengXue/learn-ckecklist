#include <stdio.h>
int main(void)
{
    char ch = 'F';
    int i = 0, j = 0;
    for(i = 1; i <= 6; ++i)
    {
        ch = 'F';
        for(j = 0; j < i; ++j)
            printf("%c", ch-j);
        printf("\n");
    }
    return 0;
}