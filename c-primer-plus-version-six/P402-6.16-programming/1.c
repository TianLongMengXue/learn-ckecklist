#include <stdio.h>
#define END_CHARACTER 'z'
#define END_LOOP 26
int main(void)
{
    char character[26], ch = 'a';
    int i = 0;
    while(ch <= END_CHARACTER)
        character[i++] = ch++;
    for(i = 0; i < END_LOOP; ++i)
        printf("%-2c", character[i]);
    return 0;
}