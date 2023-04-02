#include <stdio.h>
int main(void)
{
        union example // 声明共用体类型 "union example"
        {
        	char ch;
        	int i;
        	float f;
        };

        union example eg ; // 声明共用体变量 eg
        
        printf("&eg = %#X\n", &eg);
        printf("&ch = %#X\n", &eg.ch);
        printf("&i = %#X\n", &eg.i);
        printf("&f = %#X\n", &eg.f);
        
        return 0;
}
/*
	&eg = 0X1BC62BF4
	&ch = 0X1BC62BF4
	&i = 0X1BC62BF4
	&f = 0X1BC62BF4
*/
