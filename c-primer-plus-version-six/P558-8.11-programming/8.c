#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
void menu();
uint8_t getAlphabet(char *tip);
void add();
void subtract();
void multiply();
void divide();
int main(void)
{
    uint8_t choice = 0;
    bool flag = true;
    do
    {
        if(flag)
        {
            menu();
        }
        choice = getAlphabet("请输入菜单中的选项!!!");
        switch(choice)
        {
            case 'a':
                flag = true;
                add();
                break;
            case 's':
                flag = true;
                subtract();
                break;
            case 'm':
                flag = true;
                multiply();
                break;
            case 'd':
                flag = true;
                divide();
                break;
            case 'q':
                flag = true;
                puts("Bye!");
                exit(0);
            default:
                flag = false;
                puts("请输入菜单中的选项!!!");
                break;
        }
    }while(1);
}
void menu()
{
    for(uint8_t i = 0; i < 66; ++i)
    {
        printf("*");
    }
    putchar('\n');
    puts("Enter the operation of your choice:");
    printf("\ta. add     \ts. subtract\n");
    printf("\tm. multiply\td. divide\n");
    printf("\tq. quit\n");
    for(uint8_t i = 0; i < 66; ++i)
    {
        printf("*");
    }
    putchar('\n');
}
uint8_t getAlphabet(char *tip)
{
    uint8_t choice = 0, next_ch = 0;
    /*
     * 1. 读取用户输入时,是从一行的起始位置开始读取的
     * 2. 当读取当前行内容时,读取的是 空格 \n \t 等空白字符,那么直接读取下一个字符
     * 3. 当读取本行的第一个非空白字符是一个非字母字符时,那么本行的之后不论是否还有字符都全部舍弃
     * 4. 当读取本行的第一个非空白字符是一个字母字符时,若是其后面有其他非空白字符,那么本行的之后
     *    不论是否还有字符都全部舍弃
     * 5. 当读取本行的第一个非空白字符是一个字母字符时,若是其后面除了空白字符没有其他字符了,那么
     *    将当前读取的这个字母字符返回
    */
    do
    {
        choice = getchar();
        if(isspace(choice))
        {
            choice = getchar();
            while(isspace(choice))
            {
                choice = getchar();
                continue;
            }
        }// 本if判断结束时,那么 choice 存放的一定是一个非空白字符
        if(!isalpha(choice))
        {
            while((choice = getchar()) != '\n')
            {
                continue;
            }// 本循环结束时,已将包含了非字母字符的行舍弃完毕
            puts(tip);
            continue;// 这里是为了回到 do{}while(1); 循环的起始位置,重新开始新一轮的循环
        }// 本 if 判断未执行时,那么 choice 存放的一定是一个字母字符
        else
        {
            next_ch = getchar();
            if('\n' == next_ch)
            {
                return choice;
            }
            else if(isspace(next_ch))
            {
                next_ch = getchar();
                while(isspace(next_ch))
                {
                    if('\n' == next_ch)
                    {
                        return choice;
                    }
                    next_ch = getchar();
                }// 本循环结束时,next_ch中是一个非空白字符,说明本行有其他非空白字符,舍弃本行
                while((next_ch = getchar()) != '\n')
                {
                    continue;
                }
                puts(tip);
                continue; // 这里是为了回到 do{}while(1); 循环的起始位置,重新开始新一轮的循环
            }
            else // 执行这条分支,那么next_ch一定是一个非空白、非字母字符
            {
                while((next_ch = getchar()) != '\n')
                {
                    continue;
                }
                puts(tip);
                continue; // 这里是为了回到 do{}while(1); 循环的起始位置,重新开始新一轮的循环
            }
        }
    }while(1);
}
void add()
{
    double num1 = 0.0, num2 = 0.0;
    uint8_t ch = 0;
    printf("Enter first number: ");
    while(1 != scanf("%lf", &num1))
    {
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        puts(" is not an number.");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    printf("Enter second number: ");
    while(1 != scanf("%lf", &num2))
    {
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        puts(" is not an number.");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    printf("%.2lf+%.2lf=%.2lf\n", num1, num2, num1+num2);
}
void subtract()
{
    double num1 = 0.0, num2 = 0.0;
    uint8_t ch = 0;
    printf("Enter first number: ");
    while(1 != scanf("%lf", &num1))
    {
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        puts(" is not an number.");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    printf("Enter second number: ");
    while(1 != scanf("%lf", &num2))
    {
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        puts(" is not an number.");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    printf("%.2lf-%.2lf=%.2lf\n", num1, num2, num1-num2);
}
void multiply()
{
    double num1 = 0.0, num2 = 0.0;
    uint8_t ch = 0;
    printf("Enter first number: ");
    while(1 != scanf("%lf", &num1))
    {
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        puts(" is not an number.");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    printf("Enter second number: ");
    while(1 != scanf("%lf", &num2))
    {
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        puts(" is not an number.");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    printf("%.2lf×%.2lf=%.2lf\n", num1, num2, num1*num2);
}
void divide()
{
    double num1 = 0.0, num2 = 0.0;
    uint8_t ch = 0;
    printf("Enter first number: ");
    while(1 != scanf("%lf", &num1))
    {
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        puts(" is not an number.");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    printf("Enter second number: ");
    do
    {
        if(1 != scanf("%lf", &num2))
    	{
        	while((ch = getchar()) != '\n'){
            	putchar(ch);
            }
            puts(" is not an number.");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        else if(fabs(num2) <= DBL_EPSILON)
        {
            printf("Enter a number other than 0: ");
        }
        else
        {
            break;
        }
    }while(1);
    printf("%.2lf÷%.2lf=%.2lf\n", num1, num2, num1/num2);
}