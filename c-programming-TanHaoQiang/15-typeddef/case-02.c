#include <stdio.h>
#include <string.h>
typedef struct student
{
 	char name[10];
 	char sex[5];
 	int age;
} Student; // 这里的 Student 不是 'struct student' 类型的变量,而是 'struct student' 类型本身

int main () 
{
	Student stu; // 等价于 struct student stu
	
	strcpy(stu.name, "snow");
	strcpy(stu.sex, "man");
	stu.age = 18;
	
	printf ("name : %s, sex : %s, age : %d\n", stu.name, stu.sex, stu.age); // name : snow, sex : man, age : 18
	
	return 0;
}
