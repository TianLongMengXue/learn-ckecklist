#include <stdio.h>
int main(void)
{
        int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        
	printf("address of arr[0] is %#X\n", arr[0]);
	printf("address of *(arr+0) is %#X\n", *(arr+0));

        printf("address of *(arr+0)+0 is %#X\n", *(arr+0)+0);
        printf("address of &arr[0][0] is %#X\n", &arr[0][0]);

        printf("address of *(arr+0)+1 is %#X\n", *(arr+0)+1);
        printf("address of &arr[0][1] is %#X\n", &arr[0][1]);

	printf("address of *(arr+0)+2 is %#X\n", *(arr+0)+2);
        printf("address of &arr[0][2] is %#X\n", &arr[0][2]);

        return 0;
}
/*
	address of arr[0] is 0XE1F457B0
	address of *(arr+0) is 0XE1F457B0
	address of *(arr+0)+0 is 0XE1F457B0
	address of &arr[0][0] is 0XE1F457B0
	address of *(arr+0)+1 is 0XE1F457B4
	address of &arr[0][1] is 0XE1F457B4
	address of *(arr+0)+2 is 0XE1F457B8
	address of &arr[0][2] is 0XE1F457B8
*/
