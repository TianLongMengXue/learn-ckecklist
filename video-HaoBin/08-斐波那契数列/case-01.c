#include <stdio.h>
int main()
{
	int f1 = 1, f2 = 2, f3 = 0, number = 0, temp = 0;
	scanf("%d", &number);
	if (0 >= number) printf("非法输入!");
	else if (1 == number) f3 = f1;
	else if (2 == number) f3 = f2;
	else
	{
		for (temp = 3; temp <= number; temp++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	printf("第%d个斐波那契数是: %d\n", number, f3);
	return 0;
}
