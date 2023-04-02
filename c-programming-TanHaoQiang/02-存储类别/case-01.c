#include <stdio.h>
int main()
{
	// auto int a = 10;
	// int b = 10; // 等价于 auto int b = 10;
	extern a;
	printf("a = %d\n", a);

	int a = 20; // error: declaration of ‘b’ with no linkage follows extern declaration 使用extern声明的变量只能是全局变量才可以
	return 0;
}
