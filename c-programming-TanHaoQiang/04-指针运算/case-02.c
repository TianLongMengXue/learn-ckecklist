#include <stdio.h>
int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int *p = &a[2];
	printf("&a[2] = %#X, a[2] = %d\n", &a[2], a[2]);
	printf("p = %#X, *p = %d\n", p, *p);
	return 0;
}
/*
	&a[2] = 0XFA83718, a[2] = 3
	p = 0XFA83718, *p = 3
*/
