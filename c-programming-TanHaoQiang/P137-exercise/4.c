#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint8_t ch = 0;
    uint64_t en = 0, space = 0, number = 0, other = 0;
    while((ch = getchar()) != '\n')
    {
        if(' ' == ch)
        {
            ++space;
        }
        else if('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z')
        {
            ++en;
        }
        else if('0' <= ch && ch <= '9')
        {
            ++number;
        }
        else
        {
            ++other;
        }
    }
    ++other;
    printf("the paragraph has %lld english characters, %lld numbers, %lld spaces, %lld other characters.\n", en, number, space, other);
    return 0;
}