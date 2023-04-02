#include <stdio.h>
int main(void)
{
    char c1, c2;
    c1 = 'A';
    c2 = (char)(c1+32);
    printf("%c\n%d", c2, c2);
    return 0;
}