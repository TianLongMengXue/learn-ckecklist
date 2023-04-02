#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	FILE *stream = fopen("./case-02.txt", "w");

	char *text[] = {"C is the best programming language in the world!!!", "Chinese is the best human language in the world!!!", "China is the most safe country in the world!!!"};

	char *temp;

	if (stream == NULL) 
	{
		puts("文件打开失败!!!");
		exit(0);
	}


	for (int i = 0; i < 3; ++i) fputs(*(text+i), stream);

	fclose(stream);

	FILE *fp = fopen("./case-02.txt", "r");

	if (fp == NULL)
        {
                puts("文件打开失败!!!");
                exit(0);
        }

	for (int i = 0; i < 3; ++i)
	{
		// if (fgets(temp, strlen(*(text+i))+1, fp) != NULL) puts(temp); // 段错误 由于栈内存无法存储这个字符串导致字符数组越界
		
		temp = (char *) malloc (strlen(*(text+i))+1); // 使用堆内存存储这个字符串,无段错误
		fgets(temp, strlen(*(text+i))+1, fp);
		puts(temp);
		free(temp);
	}

	fclose(fp);

	return 0;
}
/*
	C is the best programming language in the world!!!
	Chinese is the best human language in the world!!!
	China is the most safe country in the world!!!
*/
