#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
    int16_t ch;
    uint64_t upper_count = 0, lower_count = 0;
    FILE *fp = NULL;
    fp = fopen("./essay.txt", "r");
    if(NULL == fp)
    {
        exit(1);
    }
    while((ch = getc(fp)) != EOF)
    {
        if(isalpha(ch))
        {
            if(isupper(ch))
            {
                ++upper_count;
            }
            else if(islower(ch))
            {
                ++lower_count;
            }
        }
    }
    printf("upper is %lld, lower is %lld\n", upper_count, lower_count);
    return 0;
}