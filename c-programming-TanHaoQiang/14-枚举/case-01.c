#include <stdio.h>
enum week {
     MONDAY,
     TUESDAY,
     WEDNESDAY,
     THURSDAY,
     FRIDAY,
     SATURDAY,
     SUNDAY
};
int main ()
{
	// enum week day = FRIDAY; // 等价于 enum week day = 4;
	enum week day = 4; // ERROR,枚举变量的取值只能是枚举类型 "enum week" 中声明的,不能使用除声明中以外的值
	printf("%d\n", day); // 4
	
	return 0;
}
