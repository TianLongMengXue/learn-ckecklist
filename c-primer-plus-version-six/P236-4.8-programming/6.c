#include <stdio.h>
#include <string.h>
int main(void)
{
    char fname[10], lname[10];
    printf("please input your first name and last name : ");
    scanf("%s %s", fname, lname);
    printf("%s %s\n%-*hd %-*hd\n", fname, lname, strlen(fname), strlen(fname), strlen(lname), strlen(lname));
    return 0;
}