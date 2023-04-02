#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
int main(void)
{
    int16_t ch_pre, ch_aft;
    uint64_t count;
    FILE *fp = NULL;
    fp = fopen("./essay.txt", "r");
    if(NULL == fp)
    {
        exit(1);
    }
    while((ch_pre = getc(fp)) != EOF)
    {
        if(isalpha(ch_pre))
        {
            count = 1;
            putchar(ch_pre);
            while(isalpha(ch_aft = getc(fp)))
            {
                ++count;
                putchar(ch_aft);
            }
            ch_pre = ch_aft;
            printf(" : %lld\n", count);
        }
        if(EOF == ch_pre)
            break;
    }
    fclose(fp);
    return 0;
}