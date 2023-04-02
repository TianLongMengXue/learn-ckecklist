#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    long long count = 0;
    FILE *fp = NULL;
    fp = fopen("./essay.txt", "r");
    if(NULL == fp)
    {
        puts("文件打开失败!!!");
        exit(1);
    }
    while((ch = getc(fp))!=EOF)
        ++count;
    fclose(fp);
    printf("文件 essay.txt 中有 %lld 个字符(包含空白字符在内)。\n", count);
    return 0;
}