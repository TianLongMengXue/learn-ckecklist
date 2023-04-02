#include <stdio.h>
void test(int a[]);
int main(void)
{
	int a[10];
    test(a);
	return 0;
}
void test(int a[])
{
	printf("%ld\n", sizeof(a)); // 8
}
