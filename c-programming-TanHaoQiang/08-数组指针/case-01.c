#include <stdio.h>
int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int (*p)[5] = arr;

	printf("sizeof(int) %lu\n", sizeof(int));
	
	printf("arr %#X, arr+1 %#X\n", arr, arr+1);

	printf("p %#X, p+1 %#X\n", p, p+1);

	return 0;
}
/*
	sizeof(int) 4
	arr 0XDC87F20, arr+1 0XDC87F24
	p 0XDC87F20, p+1 0XDC87F34
*/
