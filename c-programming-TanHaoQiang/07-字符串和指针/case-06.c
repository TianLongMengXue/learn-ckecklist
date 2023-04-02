#include <stdio.h>
int main(void)
{
	char str_arr[] = "new world online";
	char *str_p = "new world online";

	// 下标法
	printf("str_arr[5] = %c, str_p[6] = %c\n", str_arr[5], str_p[6]); // 
	// 地址法
	printf("*(str_arr+5) = %c, *(str_p + 6) = %c\n", *(str_arr+5), *(str_p + 6)); // 

	return 0;
}
/*
	str_arr[5] = o, str_p[6] = r
	*(str_arr+5) = o, *(str_p + 6) = r
*/
