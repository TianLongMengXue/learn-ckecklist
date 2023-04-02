#include <stdio.h>
int main()
{
	int array[] = {1, 2, 3, 4, 5};
	int i = 0, *p = array;
	
	for (i = 0; i < 5; ++i)
		printf("array[%d] = %d\n", i, array[i]);
		
	for (i = 0; i < 5; ++i)
		printf("*(array+%d) = %d\n", i, *(array+i));
    
    for (i = 0; i < 5; ++i)
		printf("*(p+%d) = %d\n", i, *(p+i));
    
    
   for (i = 0; i < 5; ++i, ++p)
       printf("*p = %d\n", *p);
	
    return 0;
}
/*
	array[0] = 1
	array[1] = 2
	array[2] = 3
	array[3] = 4
	array[4] = 5
	*(array+0) = 1
	*(array+1) = 2
	*(array+2) = 3
	*(array+3) = 4
	*(array+4) = 5
	*(p+0) = 1
	*(p+1) = 2
	*(p+2) = 3
	*(p+3) = 4
	*(p+4) = 5
	*p = 1
	*p = 2
	*p = 3
	*p = 4
	*p = 5
*/
