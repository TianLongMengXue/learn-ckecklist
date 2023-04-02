#include <stdio.h>
#include <string.h>
#define length 255
int main(void)
{
    char ch = 0, arr[length] = {'\0'};
    int i = 0, count_ch = 0;
    while((ch = getchar()) != '\n')
    {
        arr[i] = ch;
        ++i;
    }
    count_ch = strlen(arr);
    for(i = count_ch - 1; i >= 0; --i)
        printf("%c", arr[i]);
    return 0;
}