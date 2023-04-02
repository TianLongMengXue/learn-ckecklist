#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char ch;
    long long count = 0;
    FILE *fp = NULL;
    fp = fopen("./essay.txt", "r");
    if (NULL == fp)
    {
        puts("essay.txt 文件打开失败!!!");
        exit(1);
    }
    while(EOF != getc(fp))
        if(!isspace(ch))
            ++count;
    fclose(fp);
    fp = fopen("./essayct.txt", "w");
    if (NULL == fp)
    {
        puts("essayct.txt 文件打开失败!!!");
        exit(1);
    }
    fprintf(fp, "essay.txt 文件中共计 %d 个非空白字符.\n", count);
    fclose(fp);
    fp = NULL;
    return 0;
}