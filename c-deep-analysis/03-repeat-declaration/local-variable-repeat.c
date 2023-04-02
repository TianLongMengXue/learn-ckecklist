#include<stdio.h>

int main(void)
{
    int a_loc = 100;
    int a_loc;

    int b_loc;
    int b_loc = 200;

    int c_loc = 300;
    int c_loc = 400;

    int d_loc;
    int d_loc;

    return 0;
}
/*
type-repeat.c: In function ‘main’:
type-repeat.c:15:9: error: redeclaration of ‘a_loc’ with no linkage
   15 |     int a_loc;
      |         ^~~~~
type-repeat.c:14:9: note: previous definition of ‘a_loc’ was here
   14 |     int a_loc = 100;
      |         ^~~~~
type-repeat.c:18:9: error: redeclaration of ‘b_loc’ with no linkage
   18 |     int b_loc = 200;
      |         ^~~~~
type-repeat.c:17:9: note: previous declaration of ‘b_loc’ was here
   17 |     int b_loc;
      |         ^~~~~
type-repeat.c:21:9: error: redefinition of ‘c_loc’
   21 |     int c_loc = 400;
      |         ^~~~~
type-repeat.c:20:9: note: previous definition of ‘c_loc’ was here
   20 |     int c_loc = 300;
      |         ^~~~~
type-repeat.c:27:9: error: redeclaration of ‘d_loc’ with no linkage
   27 |     int d_loc;
      |         ^~~~~
type-repeat.c:26:9: note: previous declaration of ‘d_loc’ was here
   26 |     int d_loc;
      |         ^~~~~

局部变量的重复声明中：无论是 int a_loc; 与 int a_loc = 100; 还是 int b_loc = 200; 与 int b_loc; 或是 int c_loc = 300; 与 int c_loc = 400; 亦或是 int d_loc; 与 int d_loc 编译器无一例外全部报错
*/
