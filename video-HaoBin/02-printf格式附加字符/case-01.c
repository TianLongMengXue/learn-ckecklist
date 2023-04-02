#include <stdio.h>
int main()
{
	int a = 123;
	double b = 123.456789;
	// 指定变量a的域宽为7个单位宽度
	printf("%7d\n", a); // 
	// 指定变量a的域宽为7个单位宽度,且在域内左对齐
	printf("%-7d\n", a); // 
	// 指定变量b的域宽为5点单位宽度,其中小数部分占2位
	printf("%5.2f\n", b); // 
	return 0;
}
