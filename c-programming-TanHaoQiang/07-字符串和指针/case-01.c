#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[] = "snow";
	int i = 0;

	for (i = 0; i < strlen(name); i++)
		putchar(name[i]);
	putchar('\n');

	return 0;
}
