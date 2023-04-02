#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <stdlib.h>
/*
 * 读取一个字符,该字符满足如下条件
 * 1、该字符所在的那一行,在该字符之前若有字符,
      那么字符一定是 \n \t 空格等空白字符;
      若在那字符之前没有字符,该字符为本行第一个字符
 * 2、该字符所在的哪一行,在该字符之后字符的要么是一个 \n,
      要么就是若干 \t 空格等字符,然后一个 \n
*/
uint8_t get_alphabet(char *tip);
int main(void)
{
	uint8_t guess = 1, big = 100, small = 1, choice = 0;
	printf("Pick an integer form 1 to 100. I will try to guess it.\n");
	do
	{
		printf("Uh...is your number %d?\n\t(a)big  \t(b)small\t(c)right\n", guess);
		choice = get_alphabet("Please enter \"a\" or \"b\" or \"c\".");
		switch(choice)
		{
			case 'a':
				if(guess == small)
				{
					puts("I knew I could do it!");
					exit(0);
				}
				big = guess;
				guess = small + (guess - small) / 2;
				break;
			case 'b':
				if(guess == big)
				{
					puts("I knew I could do it!");
					exit(0);
				}
				small = guess;
				guess = guess + (big - guess) / 2;
				break;
			case 'c':
				puts("I knew I could do it!");
				exit(0);
				break;
			default:
				puts("Please enter \"a\" or \"b\" or \"c\".");
				break;
		}
	}while(1);
	return 0;
}
uint8_t get_alphabet(char *tip)
{
	uint8_t choice = 0, ch_next = 0;
	do
	{
		choice = getchar();
		/*
     	 * 当前行读取的第一个字符是空白字符,那么直接读取本行下一个字符
		*/
		while(isspace(choice))
		{
			choice = getchar();
			continue;
		}// 循环结束时,choice一定是一个非空白字符
		/*
    	 * 当本行第一个非空白字符是一个非字母字符时,舍弃本行全部字符
		*/
		if(!isalpha(choice))
		{
			puts(tip);
			while((choice = getchar()) != '\n')
			{
				continue;
			} // 循环结束时,choice一定是一个 \n
			continue; // 本行字符已读取完毕,要重新读取新的一行,回到 do while 循环体的第一条语句
		}
		/*
		 * 当本行第一个非空白字符是一个字母字符时,
		 * 1. 下一个字符是 \n ,直接将choice返回给调用函数
		 * 2. 其后字符是若干空白字符与一个 \n ,舍弃空白字符后,将choice返回给调用函数
		 * 3. 下一个字符是一个非空白、非 \n 字符时,直接舍弃本行全部字符
		*/
		else
		{
			/*
			 * do while循环正常结束时,说明ch_next是一个非空白、非 \n 字符
			*/
			do
			{
				ch_next = getchar();
				if('\n' == ch_next)
				{
					return choice;
				}
			}while(isspace(ch_next));

			// 执行到这里的语句说明ch_next是一个非空白、非 \n 字符,
			// 舍弃本行全部字符
			puts(tip);
			while((choice = getchar()) != '\n')
			{
				continue;
			}
		}
	}while(1);
}