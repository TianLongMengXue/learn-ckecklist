#include <stdio.h>
#define END 'g'
int main(void)
{
    char ch = 'a';
    while(ch <= END)
    {
        printf("%5c", ch);  
        ++ch;
    }
    printf("\n");
    return 0;
}