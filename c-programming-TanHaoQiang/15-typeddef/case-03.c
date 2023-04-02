#include <stdio.h>
#include <string.h>
int main(void)
{
	typedef char Name[10]; // 指定新类型名 Name ,作用时声明一个10个char类型元素的字符数组
	
	Name temp; // 等价于 char temp[10];
	
	strcpy(temp, "abcdefghi");

	printf("%lu, %s\n", strlen(temp), temp); // 9, abcdefghi

	return 0;
}
