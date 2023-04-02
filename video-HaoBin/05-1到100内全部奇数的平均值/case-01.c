#include <stdio.h>
int main()
{
	int i = 0, sumOdd = 0, sumEven = 0, countOdd = 0, countEven = 0;
	for (i = 0; i <= 100; i++)
	{
		if (1 == (i % 2)) // 也可以写成 0!=(i%2) 毕竟自然数中不是奇数就是偶数
		{	
			sumOdd += i;
			countOdd++;
		}
		else
		{
			sumEven += i;
			countEven++;
		}
	}
	printf("sumOdd = %d, countOdd = %d, averageOdd = %.2f\n", sumOdd, countOdd, (float)sumOdd/countOdd);
	printf("sumEven = %d, countEven = %d, averageEven = %.2f\n", sumEven, countEven, (float)sumOdd/countOdd);
	return 0;
}
