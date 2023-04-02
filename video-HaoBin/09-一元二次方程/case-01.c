#include <stdio.h>
#include <math.h>
int main()
{
	double a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;
	char ch_continue;
	do
	{
		printf("a = ");
		scanf("%lf", &a);

		printf("b = ");
		scanf("%lf", &b);

		printf("c = ");
		scanf("%lf", &c);

		delta = pow (b, 2.0) - 4 * a * c;

		if (delta > 0)
		{
			x1 = (- b + sqrt(delta)) / (2 * a);
			x2 = (- b - sqrt(delta)) / (2 * a);
			printf("两个解 x1 = %.2lf, x2 = %.2lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (- b) / (2 * a);
			printf("两个相同解 x1 = x2 = %.2lf\n", x1);
		}
		else printf("无解！\n");

		printf("是否继续解方程? (Y/N)\n");
		scanf(" %c", &ch_continue);
	} while ('y' == ch_continue || 'Y' == ch_continue);

	return 0;
}
