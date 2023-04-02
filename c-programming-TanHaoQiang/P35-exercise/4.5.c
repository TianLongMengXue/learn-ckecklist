#include <stdio.h>
int main(void)
{
    int num = 0;
    scanf("%d", &num);
    if( (0 == num % 3) && (0 == num % 5)) printf("%d可以同时被3和5整除\n", num);
    else printf("%d不能同时被3和5整除\n", num);
    return 0;
}
