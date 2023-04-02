#include <stdio.h>
#include <string.h>
void sort(char **, int);
void print(char **, int);
int main(void)
{
	char *name[] = {"snow","dream","draco"};
	sort(name, 3);
	print(name, 3);
	return 0;
}
void sort(char **name, int length)
{
	char *temp;
	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = i + 1; j < length; ++j)
		{
			if (strcmp( *(name+i), *(name+j) ) > 0)
			{
				temp = *(name+i);
				*(name+i) = *(name+j);
				*(name+j) = temp;
				
			}
		}
	}
}
void print(char **name, int length)
{
	for(int i = 0; i < length; ++i)
	{
		puts( *(name+i) );
	}
}
/*
	draco
	dream
	snow
*/
