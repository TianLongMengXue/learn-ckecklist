#include <stdio.h>
int main()
{
	char name[10];
	gets(name);
	puts(name);
	/*for (int i = 0; i < 10; ++i)
	{
		printf("name[%d] = %c\n", i, name[i]);
	}*/
	return 0;
}
