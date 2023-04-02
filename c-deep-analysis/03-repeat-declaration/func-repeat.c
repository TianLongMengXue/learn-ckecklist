#include<stdio.h>

int fun(int a);

double fun(double a, double b);

int main(void)
{
    printf("%d,%f\n", fun(10), fun(20.0, 30.0));

    return 0;
}

int fun(int a)
{
    return a;
}

double fun(double a, double b)
{
    return ( a > b ? a : b );
}

/*
func-repeat.c:5:8: error: conflicting types for ‘fun’
    5 | double fun(double a, double b);
      |        ^~~
func-repeat.c:3:5: note: previous declaration of ‘fun’ was here
    3 | int fun(int a);
      |     ^~~
func-repeat.c: In function ‘main’:
func-repeat.c:9:23: error: too few arguments to function ‘fun’
    9 |     printf("%d,%f\n", fun(10), fun(20.0, 30.0));
      |                       ^~~
func-repeat.c:5:8: note: declared here
    5 | double fun(double a, double b);
      |        ^~~
func-repeat.c: At top level:
func-repeat.c:19:8: error: conflicting types for ‘fun’
   19 | double fun(double a, double b)
      |        ^~~
func-repeat.c:14:5: note: previous definition of ‘fun’ was here
   14 | int fun(int a)
      |     ^~~

函数重复声明：int fun(int a); 与 double fun(double a, double b); 尽管函数类型、函数参数列表不相同,但是函数标识符相同,编译器直接报错
*/
