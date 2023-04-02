#include <stdio.h>
#define length 10
void way_one()
{
	/*
	 * 第一种方式：
	 * 先从缓冲区中读取第一个值，并假设该值为最大值 max，
	 * 然后依次读取剩下的值，每读取一个值都和当前判断最大值 max 相比较，
	 * 若是小于最大值 max 就继续读取下一个值，
	 * 若是大于最大值 max 就将该值写入 max 所标识的存储空间
	*/
	int max, temp, i; 
	
	scanf("%d", &max);
	for(i = 1; i < length; ++i)
	{
		scanf("%d", &temp);
		if(temp > max)
			max = temp;
	}
	
	printf("最大值 ：%d\n", max);
}
void way_two()
{
	/*
	 * 第二种方式：
	 * 先从缓冲区中读取数值并将读取的数值全部存放在一个数组中，
	 * 使用 冒泡排序 将数组中的值按从大到小的方式排序，
	 * 那么数组中第一个元素就是最大值
	*/
	int num[length], i = 0, j = 0, temp = 0;
	
	/*
	 * 接受输入的方式：
	 * 1、使用 for 循环，最容易理解的循环方式
	*/
	/*for(i = 0; i < length; ++i)
		scanf("%d", num+i);*/
	/*
	 * 接受输入的方式：
	 * 2、使用 while 循环
	 *     （1）++i 自增在循环内部（这种方式与 for 循环方式差不多，
	 *          但是不如 for 循环一目了然）；
	 *     （2）i++ 自增在 scanf() 函数的参数列表中
	 *     （3）i++ 自增在循环判断中，（这种方式不易理解，
	 *          并且还要注意数组下标问题，不然很容易出现数组溢出错误）。
	*/
	
	/*while(i < length)
	{
		scanf("%d", num+i);
		++i;
	}*/
	
	/*while(i < length)
		scanf("%d", num+i++);*/
	
    while(i++ < length)
        scanf("%d", num+i-1);
	
    /*for(i = 0; i < length; ++i)
        printf("%-4d", *(num+i));
    printf("\n");*/
	
	/*
	 * 冒泡排序	 
	*/
    for(i = 0; i < length - 1; ++i)
    {
        for(j = 0; j < length - i - 1; ++j)
        {
            if ( *(num+j) < *(num+j+1) )
            {
                temp = *(num+j);
                *(num+j) = *(num+j+1);
                *(num+j+1) = temp;
            }
        }
    }
	
    /*for(i = 0; i < length; ++i)
        printf("%-4d", *(num+i));
    printf("\n");*/
	
    printf("the max one is %d\n", *num);
}
int main(void)
{
    // way_one();
	
	way_two();
	
    return 0;
}
