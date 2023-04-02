/*
	6.编写一个C程序，运行时输入a,b,c三个值，输出其中值最大者 
*/
#include <stdio.h>
int main(void){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b || a == b){
		if (a > c) printf("max = %d\n", a);
		else printf("max = %d\n", c);
	}
	else {
		if (b > c || b == c) printf("max = %d\n", b);
		else printf("max = %d\n", c);
	}
	return 0;
} 
