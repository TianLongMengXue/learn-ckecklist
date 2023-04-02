#include <stdio.h>
#include <ctype.h>
char get_first();
int main(void)
{
    char ch;
    ch = get_first();
    putchar(ch);
    return 0;
}
char get_first()
{
    char ch = 0;
    ch = getchar();
    while(isspace(ch))
    {
        ch = getchar();
        continue;
    }
    return ch;
}