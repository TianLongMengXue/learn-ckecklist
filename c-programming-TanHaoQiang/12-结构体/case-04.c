#include <stdio.h>
#include <string.h>
struct student
{
	char name[10];
	char sex;
	short age;
};

void inputStudent(struct student);
void inputStudent_1(struct student *);
void printStudent(struct student);
void printStudent_1(struct student *);

int main()
{
	struct student stu;
	
    printf("%#X\n", &stu);
	inputStudent(stu);
	printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 输出乱码,将结构体变量的作为参数传递无法跨函数引用
    printf("%#X\n", &stu); // 0X17914F90
	
	strcpy(stu.name, "snow");
	stu.sex = 'M';
	stu.age = 18;
    
	printStudent(stu);
	
	return 0;
}
void inputStudent(struct student stu)
{
    printf("%#X\n", &stu); // 0X17914FBA
	strcpy(stu.name, "snow");
	stu.sex = 'M';
	stu.age = 18;
	/*
		inputStudent 函数中的结构体变量stu相当于main函数中结构体变量stu的一份复印件,
		因此对 inputStudent 函数中的结构体变量stu进行赋值操作不会影响到main函数中的结构体变量stu,
		且 inputStudent 函数执行完毕,作为该函数局部变量的stu就会被释放
	*/
}

void printStudent(struct student stu)
{
    printf("%#X\n", &stu);
	printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 正常输出 snow M 18
	/*
		printStudent 函数中的结构体变量stu相当于main函数中结构体变量stu的一份复印件,
		因此 printStudent 函数中的结构体变量存储的内容是和main函数中结构体变量stu一模一样的
	*/
}
/*
	0X525995A
	0X5259930
	��>V � 0
	0X525995A
	0X5259930
	snow M 18	
*/
