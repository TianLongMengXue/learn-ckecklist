#include <stdio.h>
#include <math.h>
int main(void)
{
    int start = 0, end = 0, max, min, i = 0;
    puts("请输入表格的上下限,两者之间使用空格隔开: ");
    scanf("%d %d", &start, &end);
    if(start == end)
		max = min = start;
    else
    {
    	max = start > end ? start : end;
    	min = start > end ? end : start;
	}
    for(i = min; i <= max; ++i)
        printf("%d, %d, %d\n", i, (int)(pow(i, 2)), (int)(pow(i, 3)));
    return 0;
}