#include <stdio.h>
int main(void)
{
	int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	int *p = arr[0]; // 指向第一行第一列

	for (; p < arr[0]+12; ++p)
	{
		if (((p - arr[0]) != 0) && ((p - arr[0]) % 4 == 0)) printf("\n");
		printf("%-4d", *p);
	}
	
	printf("\n");

	return 0;
}
/*
	1   2   3   4   
	5   6   7   8   
	9   10  11  12
*/
