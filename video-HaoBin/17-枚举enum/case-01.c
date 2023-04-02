#include <stdio.h>
enum week
{
     MONDAY,
     TUESDAY,
     WEDNESDAY,
     THURSDAY,
     FRIDAY,
     SATURDAY,
     SUNDAY
};
void f(enum week day)
{
	switch(day)
     {
         case MONDAY: printf("Monday\n"); break;
         case TUESDAY: printf("Tuesday\n"); break;
         case WEDNESDAY: printf("Wednesday\n"); break;
         case THURSDAY: printf("Thursday\n"); break;
         case FRIDAY: printf("Friday\n"); break;
         case SATURDAY: printf("Saturday\n"); break;
         case SUNDAY: printf("Sunday\n"); break;
         default: printf("Error!\n");
     }
	 // 以上的switch也可以改成下面的写法
	 switch(day)
     {
         case 0: printf("Monday\n"); break;
         case 1: printf("Tuesday\n"); break;
         case 2: printf("Wednesday\n"); break;
         case 3: printf("Thursday\n"); break;
         case 4: printf("Friday\n"); break;
         case 5: printf("Saturday\n"); break;
         case 6: printf("Sunday\n"); break;
         default: printf("Error!\n");
     }
}
int main()
{
    f(FRIDAY); // 若是写 f(4) 就是错误的,f函数的参数只能是 enum week 中声明的值
 	return 0;
}