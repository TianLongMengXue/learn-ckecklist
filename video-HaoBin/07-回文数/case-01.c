#include <stdio.h>
int main()
{
	int value = 0, invert = 0, temp = 0;
	scanf("%d", &value);
	temp = value;
	while (temp)
	{
		invert = invert * 10 + temp % 10;
		temp = temp / 10;
	}
	if (invert == value) printf("%d是一个回文数! \n", value);
	else printf("%d不是一个回文数!\n", value);
	return 0;
}
