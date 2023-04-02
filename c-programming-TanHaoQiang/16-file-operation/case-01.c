#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	FILE *stream = fopen("./case-01.txt", "w");

	char *text[] = {"C is the best programming language in the world!!!", "Chinese is the best human language in the world!!!", "China is the most safe country in the world!!!"};

	if (stream == NULL) 
	{
		puts("文件打开失败!!!");
		exit(0);
	}


	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < strlen(*(text+i)); ++j)
		{
			if (*(*(text+i)+j) != '\0') fputc(*(*(text+i)+j), stream);

		}
		fputc('\n', stream);
	}

	fclose(stream);

	FILE *fp = fopen("./case-01.txt", "r");

	if (fp == NULL)
        {
                puts("文件打开失败!!!");
                exit(0);
        }

	while (!feof(fp)) putchar(fgetc(fp));

	fclose(fp);

	return 0;
}
/*
	C is the best programming language in the world!!!
	Chinese is the best human language in the world!!!
	China is the most safe country in the world!!!
	�
*/
