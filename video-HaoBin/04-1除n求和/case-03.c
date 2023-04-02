#include <stdio.h>
int main()
{
	float i = 0,  sum = 0; // 直接定义变量i为float类型
	for (i = 1; i <= 100; i++)
	{
		sum += (1 / i);
	}
	printf("sum = %f\n", sum);
	return 0;
}
