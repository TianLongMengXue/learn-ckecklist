#include <stdio.h>
struct student
{
 	char name[10];
 	char sex[5];
 	int age;
};
int main(void)
{
	struct student stu[3] = {"snow", "man", 18, "yu", "fe", 19, "lian", "fe", 19};
	
	struct student *pstu = stu; // pstu 指向 stu[0]
    
    for (; pstu < (stu+3); ++pstu)
        printf("%s, %s, %d\n", pstu->name, pstu->sex, pstu->age);
    
    return 0;
}
/*
	snow, man, 18
	yu, fe, 19
	lian, fe, 19
*/
