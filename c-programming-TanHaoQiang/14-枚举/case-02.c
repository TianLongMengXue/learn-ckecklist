#include <stdio.h>
int main(void)
{
	enum week
	{
		MONDAY,
		TUESDAY,
		WEDNESDAY = 7,
		THURSDAY,
		FRIDAY,
		SATURDAT = 16,
		SUNDAY
	};

	enum week day_01 = TUESDAY;
	enum week day_02 = THURSDAY;
	enum week day_03 = SUNDAY;
	
	printf("day_01 = %d, day_02 = %d, day_03 = %d\n", day_01, day_02, day_03);

	return 0;
}
/*
	day_01 = 1, day_02 = 8, day_03 = 17
*/
