#include<stdio.h>

int a_glo;
int b_glo;
int c_glo;
int d_glo = 10;
int e_glo = 20;
int f_glo = 30;
static int a_loc;
static int b_loc;
static int c_loc;
static int d_loc = 40;
static int e_loc = 50;
static int f_loc = 60;

void add_glo(int a, int b);
static void add_loc(int a, int b);

int main(void)
{
    puts("hello!!!");

    add_glo(50, 60);

    add_loc(70, 80);

    return 0;
}

void add_glo(int a, int b)
{
    printf("%d\n", a + b );
}

static void add_loc(int a, int b)
{
    printf("%d\n", a + b );
}
