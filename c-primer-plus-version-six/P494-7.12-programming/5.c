#include <stdio.h>
int main(void)
{
    char ch = 0;
    while((ch = getchar())!='#')
    {
        switch(ch)
        {
            case '.':
                putchar('!');
                break;
            case '!':
                printf("!!");
                break;
            default:
                putchar(ch);
                break;
        }
    }
    return 0;
}