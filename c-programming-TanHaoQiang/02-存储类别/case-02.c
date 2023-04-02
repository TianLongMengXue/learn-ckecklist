#include <stdio.h>
int a = 10;
// auto int b = 20; // error: file-scope declaration of ‘b’ specifies ‘auto’
// register int b = 20; //  error: register name not specified for ‘b’
extern int b, c;
void test(void);
int main(void)
{
	// printf("a = %d, b = %d\n", a, b);
	printf("b = %d, c = %d\n", b, c);
	printf("&b = %#X, &c = %#X\n", &b, &c);
	test();
	return 0;
}

int b = 20, c = 30;

void test(void)
{
	printf("b = %d, c = %d\n", b, c);
        printf("&b = %#X, &c = %#X\n", &b, &c);
}
/*
 b = 20, c = 30
 &b = 0X9A707014, &c = 0X9A707018
 b = 20, c = 30
 &b = 0X9A707014, &c = 0X9A707018
 */
