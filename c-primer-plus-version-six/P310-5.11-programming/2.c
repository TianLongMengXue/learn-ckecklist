#include <stdio.h>
#define END 10
int main(void)
{
	int num = 0, i = 0;
	scanf("%d", &num);
	while(i <= END)
		printf("%d ", num+i++);
	return 0;
}