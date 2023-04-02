#include <stdio.h>
int main(void)
{
	int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	int *p; // 指向 int 的指针变量,基类型 int *

	int (*q)[4]; // 指向包含 4 个元素的一维数组,基类型 int (*)[4]

	p  = arr[0]; // 指针变量 p 指向第一行第一列
	
	q = &arr[0]; // 指针变量 q 指向第一行,即第一个一维数组的起始地址

	printf("value of arr[0] is %#X\n", arr[0]); // 第一行第一列的地址
	printf("value of p is %#X\n ", p); // 第一行第一列的地址

	printf("value of *(arr[0]) is %d\n", *(arr[0])); // arr[0][0]的值
	printf("value of *p is %d\n", *p); // arr[0][0]的值

	printf("value of arr[0]+1 is %#X\n", arr[0]+1); // 第一行第二列的地址
	printf("value of p+1 is %#X\n", p+1); // 第一行第二列的地址

	printf("value of *(arr[0]+1) is %d\n", *(arr[0]+1)); // arr[0][1]
	printf("value of *(p+1) is %#X\n", *(p+1)); // arr[0][1]的值

	printf("address of &arr[0] is %#X\n", &arr[0]); // 第一行的起始地址
        printf("value of q is %#X\n ", q); // 第一行的起始地址
	printf("value of arr[0] is %#X\n", arr[0]); // 第一行第一列的地址
        printf("value of *q is %#X\n", *q); // 第一行第一列的地址
	printf("address of &arr[0]+1 is %#X\n", &arr[0]+1); // 第二行的起始地址
        printf("value of q+1 is %#X\n", q+1); // 第二行的起始地址
	printf("value of arr[1] is %#X\n"); // 第二行第一列的地址
        printf("value of *(q+1) is %#X\n", *(q+1)); // 第二行第一列的地址

	return 0;
}
/*
	value of arr[0] is 0X73095B0
	value of p is 0X73095B0
	value of *(arr[0]) is 1
	value of *p is 1
	value of arr[0]+1 is 0X73095B4
	value of p+1 is 0X73095B4
	value of *(arr[0]+1) is 2
	value of *(p+1) is 0X2
	address of &arr[0] is 0X73095B0
	value of q is 0X73095B0
	value of arr[0] is 0X73095B0
	value of *q is 0X73095B0
	address of &arr[0]+1 is 0X73095C0
	value of q+1 is 0X73095C0
	value of arr[1] is 0XF0F042A0
	value of *(q+1) is 0X73095C0
*/
