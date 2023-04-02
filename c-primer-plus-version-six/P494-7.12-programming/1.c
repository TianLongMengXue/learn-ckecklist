#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int space_count = 0, enter_count = 0, letter_count = 0, other_count = 0;
    char ch = 0;
    puts("请输入一段文本,在文本的最后使用 \'#\' 表示输入完毕。");
    while( (ch = getchar()) != '#' )
    {
        // if(' ' == ch)
        if(isblank(ch))
            ++space_count;
        else if('\n' == ch)
            ++enter_count;
        // else if('a'<=ch && ch<='z' || 'A'<=ch&&ch<='Z')
        else if(isalpha(ch))
            ++letter_count;
        else
            ++other_count;
    }
   	printf("本段文本中含有 %d 空格, %d 换行字符, %d 英文字母, %d 个其他字符!\n", space_count, enter_count, letter_count, other_count);
    return 0;
}