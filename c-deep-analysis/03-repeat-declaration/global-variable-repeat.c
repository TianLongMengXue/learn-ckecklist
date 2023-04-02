#include<stdio.h>
  
int a_glo = 100;
int a_glo;

int b_glo;
int b_glo = 200;

int c_glo = 300;
int c_glo = 400;

int d_glo;
int d_glo;

int main(void)
{
    return 0;
}
/*
type-repeat.c:10:5: error: redefinition of ‘c_glo’
   10 | int c_glo = 400;
      |     ^~~~~
type-repeat.c:9:5: note: previous definition of ‘c_glo’ was here
    9 | int c_glo = 300;
      |     ^~~~~

全局变量的重复声明中：int a_glo; 与 int a_glo = 100; 和 int b_glo = 200; 与 int b_glo; 以及 int d_glo; 与 int d_d_glo; 编译器没有报错,但是 int c_glo = 300; 与 int c_glo = 400; 编译器报错
*/

