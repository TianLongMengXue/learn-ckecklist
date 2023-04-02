#include <stdio.h>
#define FEET_TO_CENTIMETER 30.48 // 1脚 = 30.48 厘米
#define INCH_TO_CENTIMETER 2.54 // 1英寸 = 2.54 厘米
#define FEET_TO_INCH 12 // 1脚 = 12英寸
int main(void)
{
	double centimeter = 0, inch = 0;
	int feet = 0;
	
	printf("Enter a height in centimeters: ");
	scanf("%lf", &centimeter);
	while(centimeter > 0)
	{
		inch = centimeter / INCH_TO_CENTIMETER;
		feet = (int)(inch / FEET_TO_INCH);
		inch = inch - feet * FEET_TO_INCH;
		printf("%.1f cm = %d feet, %.1f inches.\n", centimeter, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%lf", &centimeter);
	}
	// printf("bye\n");
	puts("bye");
	return 0;
}