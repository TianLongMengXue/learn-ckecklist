#include <stdio.h>
int main(void)
{
    int number = 0, i = 0, j = 0, flag = 1;
    printf("请输入一个正整数: ");
    scanf("%d", &number);
    
    while(number > 0)
    {
        if(1 == number)
        {
            printf("以下为小于等于%d的素数\n", number);
            printf("1\n");
        }
        else if(2 == number)
        {
            printf("以下为小于等于%d的素数\n", number);
            printf("1\t2\n");
        }
        else
        {
            printf("以下为小于等于%d的素数\n", number);
            printf("1\t2\t");
            for(i = 3; i <= number; ++i)
    		{
                flag = 1;
        	 	for(j = 2; j < i; ++j)
                {
                    if(0 == i % j)
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                {
            		printf("%d\t", i);
                }
    		}
        }
        printf("\n请输入一个正整数: ");
    	scanf("%d", &number);
    }
    printf("\n");
    return 0;
}