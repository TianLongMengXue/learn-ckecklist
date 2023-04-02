#include <stdio.h>
struct score
{
    int ch;
    int ma;
    float avg;
};
struct student
{
    char name[10];
    char sex[6];
    int age;
    struct score sc; // 结构体变量也可以是作为结构体的成员
};
int main(void)
{
    struct student stu_1 = {"snow", "man", 18, {58, 62, 60}}, stu_2;
    int sum;
    int age; // 声明和结构体成员相同的标识符的变量,二者虽然标识符相同,但不是同一变量
    
    printf("%d, %d\n", stu_1.sc.ch, stu_1.sc.ma); // 若是成员本身又是一个结构体类型,那么需要使用若干个成员运算符,一级一级的找到最低一级的成员,即只能对最低级的成员进行赋值、运算、存取
    
    // 结构体变量的成员可以像普通变量那样执行各种运算
    stu_2.sc.ch = stu_1.sc.ch;
    stu_2.sc.ma = stu_1.sc.ma;
    sum = stu_2.sc.ch + stu_2.sc.ma;
    ++stu_1.age; // 等价于 ++(stu_1.age) 成员运算符的优先级最高
    
    printf("%d, %d, %d, %d\n", stu_2.sc.ch, stu_2.sc.ma, sum, stu_1.age);
    
    stu_2 = stu_1; // 相同结构体类型的结构体变量可以相互赋值
    
    return 0;
}
/*
	58, 62
	58, 62, 120, 19
*/
