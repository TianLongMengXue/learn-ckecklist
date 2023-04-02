#include <stdio.h>
#include <stdbool.h>
bool isPrime(int m);
int main()
{
	int val, i, j;
	scanf("%d", &val);
	for (i = 2; i <= val; ++i)
	{
		
		if (isPrime(i))
			printf("%d\n", i);
	}
	return 0;
}
bool isPrime(int m)
{
	int j;
	for (j = 2; j < m; ++j)
	{
		if (0 == m % j)
			break;
	}
	if (m == j)
		return true;
	else
		return false;
}