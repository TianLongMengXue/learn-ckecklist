#include <stdio.h>
#define MIN_TO_HOUR 60
int main(void)
{
	int min_count = 0, min = 0, hour = 0;
	
	printf("Please input the total minutes : ");
	scanf("%d", &min_count);
	
	printf("%d\n", min_count);
	
	while(min_count > 0)
	{
		hour = min_count / MIN_TO_HOUR;
		min = min_count % MIN_TO_HOUR;
		printf("%d 分钟是 %d 小时 %d 分钟\n", min_count, hour, min);
		scanf("%d", &min_count);
	}
	
	return 0;
}