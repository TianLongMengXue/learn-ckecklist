#include <stdio.h>
int main(void)
{
    char ch;
    while((ch = getchar()) != 'i')
    	putchar(ch);
    return 0;
}