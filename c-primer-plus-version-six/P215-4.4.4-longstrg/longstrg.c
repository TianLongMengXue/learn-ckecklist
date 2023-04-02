#include <stdio.h>
int main(void)
{
	// 1、使用多个 printf() 函数将一个长字符串分次输出
	printf("Here's one way to print a ");
	printf("long string.\n");
	
	// 2、使用反斜杠
	printf("Here's another way to print a \
long string.\n");
	
	// 3、使用 多个双引号 组合输出
	printf("Here's the newest way to print a "
	"long string.\n"); /* ANSI C */
	return 0;
}