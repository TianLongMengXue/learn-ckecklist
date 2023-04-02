#include <stdio.h>
int main()
{
	int array[] = {1, 2, 3, 4, 5};
	int *p = array;
	printf("*p = %d, array[0] = %d\n", *p, array[0]);
	printf("p = %#X, array = %#X\n", p, array);
	
	p++;
	printf("*p = %d, array[1] = %d\n", *p, array[1]);
	printf("p = %#X, array = %#X\n", p, &array[1]);

	p++;
        printf("*p = %d, array[2] = %d\n", *p, array[2]);
        printf("p = %#X, array = %#X\n", p, &array[2]);

	p++;
        printf("*p = %d, array[3] = %d\n", *p, array[3]);
        printf("p = %#X, array = %#X\n", p, &array[3]);

	p++;
        printf("*p = %d, array[4] = %d\n", *p, array[4]);
        printf("p = %#X, array = %#X\n", p, &array[4]);

	return 0;
}
/*
	*p = 1, array[0] = 1
	p = 0X91C3AD20, array = 0X91C3AD20
	*p = 2, array[1] = 2
	p = 0X91C3AD24, array = 0X91C3AD24
	*p = 3, array[2] = 3
	p = 0X91C3AD28, array = 0X91C3AD28
	*p = 4, array[3] = 4
	p = 0X91C3AD2C, array = 0X91C3AD2C
	*p = 5, array[4] = 5
	p = 0X91C3AD30, array = 0X91C3AD30
*/
