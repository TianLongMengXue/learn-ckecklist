#include <stdio.h>
int main()
{
    char c;
    while((c=getchar())!='\n')
    {
        if('a'<=c&&c<='z'||'A'<=c&&c<='Z')
        {
            c=c+4;
            if(c>'Z'&&c<='Z'+4||c>'z')
                c=c-26;
        }
        putchar(c);
    }
    printf("\n");
    return 0;
}