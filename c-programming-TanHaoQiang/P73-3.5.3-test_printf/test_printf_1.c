#include <stdio.h>
int main()
{
	int a = 123;
	double b = 123.456789;
    int m = 5, n = 2;
	// 指定变量a的域宽为5个单位宽度
	printf("%5d\n", a);
	printf("%*d\n", m, a);
	// 指定变量a的域宽为5个单位宽度,且在域内左对齐
	printf("%-5d\n", a);
	printf("%-*d\n", m, a);
	// 指定变量b的域宽为5点单位宽度,其中小数部分占2位
	printf("%5.2f\n", b);
    printf("%*.*f\n", m, n, b);
	// 指定变量b的域宽为5点单位宽度,其中小数部分占2位,且在域内左对齐
    printf("%-5.2f\n", b);
    printf("%-*.*f\n", m, n, b);
	return 0;
}