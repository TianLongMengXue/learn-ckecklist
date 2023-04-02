#include <stdio.h>
int main(void)
{
	int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	printf("address of arr is %#X\n", arr);
	printf("address of arr[0] is %#X\n", arr[0]);
	printf("address of &arr[0] is %#X\n", &arr[0]);
	printf("address of &arr[0][0] is %#X\n", &arr[0][0]);

	printf("address of arr[1] is %#X\n", arr[1]);
        printf("address of &arr[1] is %#X\n", &arr[1]);
        printf("address of &arr[1][0] is %#X\n", &arr[1][0]);

	printf("address of arr[2] is %#X\n", arr[2]);
        printf("address of &arr[2] is %#X\n", &arr[2]);
        printf("address of &arr[2][0] is %#X\n", &arr[2][0]);
	return 0;
}
/*
	address of arr is 0X9692F770
	address of arr[0] is 0X9692F770
	address of &arr[0] is 0X9692F770
	address of &arr[0][0] is 0X9692F770
	address of arr[1] is 0X9692F780
	address of &arr[1] is 0X9692F780
	address of &arr[1][0] is 0X9692F780
	address of arr[2] is 0X9692F790
	address of &arr[2] is 0X9692F790
	address of &arr[2][0] is 0X9692F790
*/
