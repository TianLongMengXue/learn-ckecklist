/*
	求 1-(1/2)+(1/3)-(1/4)+...+(1/99)-(1/100)

	通项 (-1)^(n-1) * (1/n)
*/
#include <stdio.h>
int main(void){
	int sign = 1, i = 0;
	float sum = 0;
	for(i = 1; i <= 100; ++i){
		sum = sign*(1.0/i) + sum;
		// printf("%f\n", sign*(1.0/i));
		sign = (-1)*sign;
	}
	printf("%f\n", sum);
	return 0;
}
