#include <stdio.h>
int main(void)
{
    void action1(int, int), action2(int, int); // 函数声明
    char ch;
    int a = 15, b = 23;
    ch = getchar();
    switch(ch)
    {
        case 'a':
        case 'A': action1(a, b);break;
        case 'b':
        case 'B': action2(a, b);break;
        default: putchar('\a');
    }
    return 0;
}
void action1(int x, int y)
{
    printf("x+y=%d\n", x+y);
}
void action2(int x, int y)
{
    printf("x*y=%d\n", x*y);
}