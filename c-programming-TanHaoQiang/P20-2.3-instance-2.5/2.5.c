/*
	给出一个大于或者等于3的正整数,判断它是不是一个素数
	素数即只能被1和本身整除的数 
*/
#include <stdio.h>
int main(void){
	int num = 0, i = 0, leap = 0;
	scanf("%d", &num);
	if(num >= 3){
		for(i = 2; i < num; ++i)
			if(0 == num%i){
				leap = 1;
				break;
			}
		if(leap) printf("%d不是一个素数\n", num);
		else printf("%d是一个素数\n", num);
	}
	else printf("不符合判断条件!!!"); 
} 
