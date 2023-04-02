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
	
	// inputStudent(stu);
	// printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 输出乱码,通过将结构的作为形参传递无法跨函数调用
	
	inputStudent_1(&stu);
	printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 正常输出 snow M 18
	
	printStudent(stu);
	printStudent_1(&stu);
	
	return 0;
}
void inputStudent(struct student stu)
{
	strcpy(stu.name, "snow");
	stu.sex = 'M';
	stu.age = 18;
	/*
		inputStudent 函数中的结构体变量stu相当于main函数中结构体变量stu的一份复印件,
		因此对 inputStudent 函数中的结构体变量stu进行赋值操作不会影响到main函数中的结构体变量stu,
		且 inputStudent 函数执行完毕,作为该函数局部变量的stu就会被释放
	*/
}
void inputStudent_1(struct student *pstu) // 64位编译系统下,sizeof(pstu) = 8
{
	strcpy(pstu->name, "snow"); // 等价于 strcpy((*pstu).name, "snow");
	pstu->sex = 'M'; // 等价于 (*pstu).sex = 'M';
	pstu->age = 18; // 等价于 (*pstu).age = 18;
}
void printStudent(struct student stu)
{
	printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 正常输出 snow M 18
	/*
		printStudent 函数中的结构体变量stu相当于main函数中结构体变量stu的一份复印件,
		因此 printStudent 函数中的结构体变量存储的内容是和main函数中结构体变量stu一模一样的
	*/
}
void printStudent_1(struct student *pstu)
{
	printf("%s %c %d\n", pstu->name, pstu->sex, pstu->age); // 正常输出 snow M 18
	/*
		跨函数输出一个结构体变量的内容,既可以将结构体变量作为参数,也可以将结构体的地址作为参数
	*/
}