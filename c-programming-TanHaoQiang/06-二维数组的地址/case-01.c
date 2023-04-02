#include <stdio.h>
int main(void)
{
	int arr[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	printf("address of arr is %#X\n", arr);
	printf("address of &arr is %#X\n", &arr);
	printf("address of &arr[0][0] is %#X\n", &arr[0][0]);

	return 0;
}
/*
	address of arr is 0X232E07D0
	address of &arr is 0X232E07D0
	address of &arr[0][0] is 0X232E07D0
*/
