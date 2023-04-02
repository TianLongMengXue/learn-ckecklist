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

        eg.ch = 'a';
        printf ("ch = %c\n", eg.ch);

        eg.i = 100;
        printf ("ch = %c\n", eg.ch);
        printf ("i = %d\n", eg.i);

        eg.f = 1.25F;
        printf ("ch = %c\n", eg.ch);
        printf ("i = %d\n", eg.i);
        printf ("f = %f\n", eg.f);

        return 0;
}
/*
        ch = a
	ch = d
	i = 100
	ch = 
	i = 1067450368
	f = 1.250000
        
        1、共用体变量中在同一时刻只有一个成员是有效的,即同一时刻共用体变量中只能存储一个成员
        2、共用体变量中起作用的成员是最后一次被赋值的成员,在对共用体变量的成员赋值之后,共用体变量的内存空间中的值就会被"覆盖"
        3、
*/
