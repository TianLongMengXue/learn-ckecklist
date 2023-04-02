#include <stdio.h>
#include <malloc.h>
int main()
{
	int array[5]; // 创建一个静态数组,若每个元素占 sizeof(int)=4 的字节数,数组一共占用20个字节,每4个字节存储一个元素
    int length, *pArray, i;
    
    // 动态的创建一个数组
    printf("请输入你要存放的元素个数:");
    scanf("%d", &length);
    pArray = (int *) malloc (4 * length);
    /*
    	动态的创建一个一维数组,该一维数组的长度为length,数组名为pArray,该数组的每个元素是int类型,类似于int pArray[length];
    */
	
	// 对动态数组进行赋值操作
	for (i = 0; i < length; ++i)
		scanf("%d", &pArray[i]);

	// 将动态数组的元素输出
	for (i = 0; i < length; ++i)
		printf("%d\n", pArray[i]);
	
	// 释放掉动态数组占用的内存空间
	free(pArray);
	
	return 0;
}
