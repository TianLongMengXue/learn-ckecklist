#include <stdio.h>

typedef int Integer; // 指定新类型名 Integer ,作用和 int 类型相同
typedef double Real; // 指定新类型名 Real ,作用和 double 类型相同

int main(void)
{
	Integer i = 10; // 等价于 int i = 10;
	Real j = 1.25; // 等价于 double j = 1.25;

	printf("i = %d, j = %f\n", i, j); // i = 10, j = 1.250000

	return 0;
}
