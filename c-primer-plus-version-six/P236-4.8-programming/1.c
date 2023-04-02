#include <stdio.h>
int main(void)
{
    char fname[10];
    char lname[10];
    printf("Please input your first name : ");
    scanf("%s", fname);
    printf("Please input your last name : ");
    scanf("%s", lname);
    printf("%s,%s\n", fname, lname);
    return 0;
}