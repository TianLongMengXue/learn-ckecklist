#include <stdio.h>
int main(void)
{
	short a = 32767;
	float b = 3.14E38;
	float c = 3.14159;
	printf("a = %hd, b = %f, c = %f\n", a+1, b*10.0F, c/100.0F);
	return 0;
}