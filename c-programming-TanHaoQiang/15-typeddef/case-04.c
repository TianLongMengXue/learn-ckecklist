#include <stdio.h>
#include <string.h>
int main(void)
{
	typedef char *String; // 指定新类型名 String ,作用是声明字符指针

	String ptr, str[10]; // 等价于 char *ptr, *str[10]; 声明一个字符指针 ptr ,一个指针数组 str
}
