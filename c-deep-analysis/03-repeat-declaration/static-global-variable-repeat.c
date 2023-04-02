#include<stdio.h>

int a_glo = 100;
static int a_glo = 200;

int b_glo = 300;
static int b_glo;

int c_glo;
static int c_glo = 400;

int d_glo;
static int d_glo;

static int e_glo = 500;
static int e_glo;

static int f_glo;
static int f_glo = 600;

static int g_glo = 700;
static int g_glo = 800;

static int h_glo;
static int h_glo;

int main(void){
    return 0;
}
/*
static-global-variable-repeat.c:4:12: error: redefinition of ‘a_glo’
    4 | static int a_glo = 200;
      |            ^~~~~
static-global-variable-repeat.c:3:5: note: previous definition of ‘a_glo’ was here
    3 | int a_glo = 100;
      |     ^~~~~
static-global-variable-repeat.c:7:12: error: static declaration of ‘b_glo’ follows non-static declaration
    7 | static int b_glo;
      |            ^~~~~
static-global-variable-repeat.c:6:5: note: previous definition of ‘b_glo’ was here
    6 | int b_glo = 300;
      |     ^~~~~
static-global-variable-repeat.c:10:12: error: static declaration of ‘c_glo’ follows non-static declaration
   10 | static int c_glo = 400;
      |            ^~~~~
static-global-variable-repeat.c:9:5: note: previous declaration of ‘c_glo’ was here
    9 | int c_glo;
      |     ^~~~~
static-global-variable-repeat.c:13:12: error: static declaration of ‘d_glo’ follows non-static declaration
   13 | static int d_glo;
      |            ^~~~~
static-global-variable-repeat.c:12:5: note: previous declaration of ‘d_glo’ was here
   12 | int d_glo;
      |     ^~~~~
static-global-variable-repeat.c:22:12: error: redefinition of ‘g_glo’
   22 | static int g_glo = 800;
      |            ^~~~~
static-global-variable-repeat.c:21:12: note: previous definition of ‘g_glo’ was here
   21 | static int g_glo = 700;
      |            ^~~~~
*/
