/*
	求1*2*3*4*5 
*/
#include <stdio.h>
int main(void){
	int sum = 2, i = 3;
	for(i = 3; i < 6; ++i) sum*=i;
	printf("sum = %d\n", sum);
	return 0;
} 
