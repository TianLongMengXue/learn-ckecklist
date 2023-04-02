#include <stdio.h>
#include <string.h>
int main(void)
{
    char fname[10];
    char lname[10];
    printf("Please input your first name : ");
    scanf("%s", fname);
    printf("Please input your last name : ");
    scanf("%s", lname);
    // a.打印名和姓，包括双引号；
    printf("\"%s\",\"%s\"\n", fname, lname);
    // b.在宽度为20的字段右端打印名和姓，包括双引号；
    printf("\"%20s\",\"%20s\"\n", fname, lname);
    // c.在宽度为20的字段左端打印名和姓，包括双引号；
    printf("\"%-20s\",\"%-20s\"\n", fname, lname);
    // d.在比姓名宽度宽3的字段中打印名和姓。
    printf("\"%*s\",\"%*s\"\n", strlen(fname)+3, fname, strlen(lname)+3, lname);
    return 0;
}