#include <stdio.h>
int main()
{
	int i = 0;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += (1 / (float) i); // 强制类型转化
	}
	printf("sum = %f\n", sum);
	return 0;
}
