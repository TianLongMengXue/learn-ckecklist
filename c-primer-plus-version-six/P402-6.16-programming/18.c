#include <stdio.h>
int main(void)
{
    int count = 5, i = 0;
    i = 1;
    do
    {
        count -= i;
        count *= 2;
        printf("第%d周,Rabnud博士的朋友数量为%d\n", i, count);
        ++i;
    }while(count <= 150);
}