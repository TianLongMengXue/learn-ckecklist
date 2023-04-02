#include <stdio.h>
int main(void)
{
	int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	printf("address of arr[0] is %#X\n", arr[0]);
	printf("address of arr[0]+0 is %#X\n", arr[0]+0);
	printf("address of &arr[0][0] is %#X\n", &arr[0][0]);
	printf("address of arr[0]+1 is %#X\n", arr[0]+1);
	printf("address of &arr[0][1] is %#X\n", &arr[0][1]);
	printf("address of arr[0]+2 is %#X\n", arr[0]+2);
	printf("address of &arr[0][2] is %#X\n", &arr[0][2]);
        printf("address of arr[0]+3 is %#X\n", arr[0]+3);
	printf("address of &arr[0][3] is %#X\n", &arr[0][3]);

        /*printf("address of arr[1] is %#X\n", arr[1]);
        printf("address of arr[1]+0 is %#X\n", arr[1]+0);
        printf("address of arr[1]+1 is %#X\n", arr[1]+1);
        printf("address of arr[1]+2 is %#X\n", arr[1]+2);
        printf("address of arr[1]+3 is %#X\n", arr[1]+3);

	printf("address of arr[2] is %#X\n", arr[0]);
        printf("address of arr[2]+0 is %#X\n", arr[0]+0);
        printf("address of arr[2]+1 is %#X\n", arr[0]+1);
        printf("address of arr[2]+2 is %#X\n", arr[0]+2);
        printf("address of arr[2]+3 is %#X\n", arr[0]+3);*/

	return 0;
}
/*
	address of arr[0] is 0XACDCAD80
	address of arr[0]+0 is 0XACDCAD80
	address of &arr[0][0] is 0XACDCAD80
	address of arr[0]+1 is 0XACDCAD84
	address of &arr[0][1] is 0XACDCAD84
	address of arr[0]+2 is 0XACDCAD88
	address of &arr[0][2] is 0XACDCAD88
	address of arr[0]+3 is 0XACDCAD8C
	address of &arr[0][3] is 0XACDCAD8C
*/
