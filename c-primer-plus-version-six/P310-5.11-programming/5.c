#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int count = 0, sum = 0, i = 0;
	
	printf("Enter how many days do you want to work: ");
	scanf("%d", &count);
	if(count < 0) exit(0); // 工作天数不可能小于0
	while(i <= count)
		sum = sum + i++;
	printf("you work %d days, gian $%d\n", count, sum);
	return 0;
}