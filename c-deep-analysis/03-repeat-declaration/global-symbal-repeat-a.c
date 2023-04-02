#include<stdio.h>
int a = 100;
int fun(void)
{
    a += 10;
}
int main(void)
{
    return 0;
}
/*
/usr/bin/ld: /tmp/cchuR8YK.o:(.data+0x0): multiple definition of `a'; /tmp/cceWOrhJ.o:(.data+0x0): first defined here
/usr/bin/ld: /tmp/cchuR8YK.o: in function `fun':
global-symbal-repeat-b.c:(.text+0x0): multiple definition of `fun'; /tmp/cceWOrhJ.o:global-symbal-repeat-a.c:(.text+0x0): first defined here
*/

// 全局变量重复定义: int a = 100; 与 int a = 200; 链接器报错

// 全局函数重复定义: int fun(void){ a += 10; } 与 int fun(void){ a -= 20; } 链接器报错
