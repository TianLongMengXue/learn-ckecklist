#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100] = {'\0'};
    int length = 0, i = 0;;
    printf("Please input a word: ");
    scanf("%s", str);
    length = strlen(str);
    for(i = length - 1; i >= 0; --i)
        printf("%c", str[i]);
    return 0;
}