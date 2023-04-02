#include <stdio.h>
#include <malloc.h>
int main(void)
{
	int *ptr = (int *) calloc(6,  sizeof(int));

	printf("ptr = %#X\n", ptr);

	for (int i = 0; i < 6; ++i)
	{
		// *(ptr+i) = ++i; // 存在赋值问题 0    1    0    3    0    5 一次循环中 i 做了两次 ++ 运算,即 i = 0,1,3,5 且只有1,3,5时,执行了赋值运算
		*(ptr+i) = i + 1;
	}

	for (int i = 0; i < 6; ++i)
                printf("%-5d", *(ptr+i));

        printf("\n");

	ptr = (int *) realloc (ptr, 10 * sizeof(int));

	printf("ptr = %#X\n", ptr);

	for (int i = 0; i < 6; ++i)
                printf("%-5d", *(ptr+i));

	printf("\n");

	return 0;
}
/*
	ptr = 0X541822A0
	1    2    3    4    5    6    
	ptr = 0X541826D0
	1    2    3    4    5    6
*/
