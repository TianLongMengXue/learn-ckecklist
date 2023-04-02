#include <stdio.h>
int main(void)
{
    int i = 100, j = 0, flag = 1;
    for(i = 100; i <= 200; ++i)
    {
        for(j = 2; j < i; ++j)
        {
            if(0 == i%j)
            {
                flag = 0;
                break;
            }
        }
        if(flag) printf("%d 是一个素数！\n", i);
		flag = 1;
    }
    return 0;
}
