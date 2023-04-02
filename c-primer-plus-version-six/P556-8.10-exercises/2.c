#include <stdio.h>
int main(void)
{
    printf("putchar(\'H\') : ");
    putchar('H');
    printf("\n");
    printf("putchar(\'\\007\') : ");
    putchar('\007');
    printf("\n");
    printf("putchar(\'\\n\') : ");
    putchar('\n');
    printf("\n");
    printf("putchar(\'b\') : ");
    putchar('b');
    printf("\n");
    return 0;
}