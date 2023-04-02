#include <stdio.h>
int main()
{
    char ch = 127;
	short a = 32767;
    int b = 2147483647;
    long c = 2147483647;
    printf("%hhd, %hhd, %hd\n", ch, ch+1, ch+1);
	printf("%hd, %hd, %d\n", a, a+1, a+1);
    printf("%d, %d, %ld\n", b, b+1, b+1);
    printf("%ld, %ld, %lld\n", c, c+1, c+1);
    return 0;
	return 0;
}