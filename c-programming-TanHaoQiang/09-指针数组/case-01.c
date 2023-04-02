#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		puts( *(argv+i) );
	}

	return 0;
}
/*
	./a.out new world online
	
	4	
	./a.out
	new
	world
	online
*/
