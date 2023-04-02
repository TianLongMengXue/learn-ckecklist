#include <stdio.h>
void a(void);
void b(void);
void c(void);
int main(void)
{
    printf("---- a ----\n");
    a();
    printf("\n");
    printf("---- b ----\n");
    b();
    printf("---- c ----\n");
    c();
    return 0;
}
void a(void)
{
    int x = 0;
    while(++x<3) // ++x; x<3
        printf("%4d", x);
}
void b(void)
{
    int x = 100;
    while(x++<103) // x<103; x++;
        printf("%4d\n", x);
    printf("%4d\n", x);
}
void c(void)
{
    char ch = 's';
    while(ch < 'w')
    {
        printf("%c", ch);
        ch++;
    }
    printf("%c\n", ch);
}