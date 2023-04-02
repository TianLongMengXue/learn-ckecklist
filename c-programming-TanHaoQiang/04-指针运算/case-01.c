#include <stdio.h>
int main () {
	int array[] = {1,2,3,4};
    // 这里获得的是数组的首个元素地址，即 array[0] 的地址
	printf ("address of array[0] = %#X\n", &array[0]);
    // 这里获得的是数组的第二个元素地址，即 array[1] 的地址
	printf ("address of array[1] = %#X\n", &array[1]);
    // 这里获得的是数组的第三个元素地址，即 array[2] 的地址
	printf ("address of array[2] = %#X\n", &array[2]);
    // 这里获得的是数组的第四个元素地址，即 array[3] 的地址
	printf ("address of array[3] = %#X\n", &array[3]);
	return 0;
}
/*
	address of array[0] = 0X9DB324C0
	address of array[1] = 0X9DB324C4
	address of array[2] = 0X9DB324C8
	address of array[3] = 0X9DB324CC
*/
