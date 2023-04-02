#include <stdio.h>
int main(void)
{
	int day_count = 0, days = 0, weeks = 0;
	
	scanf("%d", &day_count);
	while(day_count > 0)
	{
		weeks = day_count / 7;
		days = day_count % 7;
		printf("%d days are %d weeks,%ddays.\n", day_count, weeks, days);
		scanf("%d", &day_count);
	}

	return 0;
}