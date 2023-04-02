#include <stdio.h>
int main(void)
{
    int taozi = 1, i = 0;
    for(i = 9; i >= 1; --i)
    {
        taozi = (taozi + 1) * 2;
    }
    printf("猴子第1天摘了%d个桃子\n", taozi);
    return 0;
}