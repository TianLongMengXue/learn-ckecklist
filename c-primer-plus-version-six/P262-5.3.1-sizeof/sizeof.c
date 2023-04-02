#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize); // %zd 为C99 标准新增的转换说明
    return 0;
}