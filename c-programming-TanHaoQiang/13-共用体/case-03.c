#include <stdio.h>
union example
{
	char ch;
	char str[10];
	int i;
};
void test(union example *);
int main(void)
{
    union example eg = {'a'};
    
    test(&eg);
    
    return 0;
}
void test(union example *peg)
{
    printf("%c\n", peg->ch);
}
