#include <stdio.h>
int main(void)
{
	char format_arr[] = "a = %d, b = %d\n";
	char *format_p = "a = %d, b = %d\n";

	int a = 10, b = 20;

	printf(format_arr, a, b);
	printf(format_p, a, b);

	return 0;
}
/*
	a = 10, b = 20
	a = 10, b = 20
*/
