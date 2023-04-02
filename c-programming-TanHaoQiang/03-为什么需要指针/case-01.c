#include <stdio.h>
void swap(int ,int);
int main(void)
{
    int i, j;
    scanf("%d %d", &i, &j);
    swap(i, j);
    printf("main value : i = %d, j = %d\n", i, j);
    return 0;
}
void swap(int i, int j)
{
    int temp = i;
    i = j;
    j = temp;
    printf("swap value : i = %d, j = %d\n", i, j);
}
/*
	12 18
	swap value : i = 18, j = 12
	main value : i = 12, j = 18
 */
