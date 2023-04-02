#include <stdio.h>
int main(void)
{
    char ch = 0;
    int count = 0;
    while( (ch = getchar()) != '#' )
    {
        printf("%c : %3d ", ch, ch);
        ++count;
        if(0 == count%8) putchar('\n');
    }
    return 0;
}