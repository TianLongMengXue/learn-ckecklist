#include <stdio.h>
#include <malloc.h>
int main(void)
{
    int *p = (int *) calloc (6, sizeof(int));

    puts("请输入6个整数,每个整数使用空格分隔!");
    for (int i = 0; i < 6; ++i)
    	scanf("%d", p+i);

    for (int i = 0; i < 6; ++i)
        printf("%-6d", *(p+i));

    printf("\n");

    return 0;
}
/*
	请输入6个整数,每个整数使用空格分隔!
	1 2 3 4 5 6
	1     2     3     4     5     6
*/
