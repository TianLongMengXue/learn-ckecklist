#include <stdio.h>
#include <float.h>
#include <stdint.h>
#include <math.h>
int main(void)
{
	double number = 0.0;
	printf("请输入: ");
	do
	{
		scanf("%lf", &number);
		if(number <= DBL_EPSILON || fabs( number - 1000.0) <= DBL_EPSILON || number > 1000.0)
		{
			printf("请重新输入: ");
		}
		else
		{
			printf("(uint64_t)number=%d\n", (uint64_t)sqrt(number));
			break;
		}
	}while(1);
}