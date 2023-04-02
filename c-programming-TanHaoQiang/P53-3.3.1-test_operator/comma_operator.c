#include <stdio.h>
int main()
{
	int i = 0, j = 2;
	i = (j++, ++j, j + 2, j - 3);
	// 3 , 4 , 4+2=6, 4-3=1
	printf("i = %d\n", i); // 1
	return 0;
}