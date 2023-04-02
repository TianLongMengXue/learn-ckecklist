#include <stdio.h>
#define SEC	3.156e7
int main(void)
{
	int age;
    printf("please input your age : ");
    scanf("%d", &age);
    printf("you have already lost %e seconds\n", SEC * age);
    return 0;
}