#include <stdio.h>
int main(void)
{
    char ch = 0;
    while((ch = getchar())!='#')
    {
        if('.' == ch)
        {
            putchar('!');
            continue;
        }
        else if('!' == ch)
        {
            printf("!!");
            continue;
        }
        else
            putchar(ch);
    }
    return 0;
}