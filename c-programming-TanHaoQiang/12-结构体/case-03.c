#include <stdio.h>
struct student
{
        char name[10];
        char sex[5];
        int age;
};
int main(void)
{
   	struct student stu = {"snow", "man", 18};
    	
	printf("%#X\n", &stu);
	printf("%#X\n", &stu.name);
    	printf("%#X\n", &stu.sex);
    	printf("%#X\n", &stu.age);
    
    return 0;
}
/*
	0XEC0D41E0
	0XEC0D41E0
	0XEC0D41EA
	0XEC0D41F0
*/
