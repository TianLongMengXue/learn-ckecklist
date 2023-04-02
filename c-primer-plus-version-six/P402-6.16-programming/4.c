#include <stdio.h>
int main(void)
{
    char ch = 'A';
    int i = 0, j = 0;
    for(i = 0; i < 6; ++i)
    {
        for(j = 0; j <= i; ++j, ++ch)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}