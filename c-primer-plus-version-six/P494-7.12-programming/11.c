#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define ARTICHOKE_UNIT_PRICE 2.05 // 洋蓟的单价(美元/磅)
#define BEET_UNIT_PRICE 1.15 // 甜菜的单价(美元/磅)
#define CARROT_UNIT_PRICE 1.09 // 胡萝卜的单价(美元/磅)
#define EXTRA_WEIGHT_PART_ONE 5 // 运费和包装费的第一个重量分界点(磅)
#define EXTRA_WEIGHT_PART_TWO 20 // 运费和包装费的第二个重量分界点(磅)
#define EXTRA_EXPENSE_PART_ONE 6.5 // 运费和包装费的第一个费用分界点
#define EXTRA_EXPENSE_PART_TWO 14 // 运费和包装费的第二个费用分界点
#define EXTRA_EXPENSE_PART_THREE 0.5 // 超过20磅之后每增加一磅需要再多付运费和包装费0.5美元
#define GOODS_DISCOUNT_PART 100.0 // 商品费用(不包含运费和包装费)有折扣的价格分界点
#define GOODS_DISCOUNT_RATE 0.05 // 商品费用(不包含运费和包装费)超过100美元有0.05的折扣
#define GOODS_COUNT 3 // 可以订购的商品种类的数量
#define STAR_COUNT 66 // 分隔线中包含的 * 的个数
char get_alphabet(const char *tip);
struct menu
{
    char *goods; // 商品名称
    double unit_price; // 商品单价
    double weight; // 商品重量
};
/*
 * 初始化商品名称和重量
*/
struct menu goods_weight[GOODS_COUNT] = {
	{"洋蓟", ARTICHOKE_UNIT_PRICE, 0.0},
	{"甜菜", BEET_UNIT_PRICE, 0.0},
	{"胡萝卜", CARROT_UNIT_PRICE, 0.0}
};
void calc_price(struct menu *bill);
void show_goods_bill(struct menu *bill);
int main(void)
{
    /*
     * choice 菜单中选项对应的字母
     * flag 用于判断是否需要输出菜单
    */
    char choice;
    int i = 0, flag = 1;
    do
    {
        if(flag)
        {
        	for(i = 0; i < STAR_COUNT; ++i) // 分割线
        	{
            	printf("*");
        	}
        	putchar('\n');
        	printf("\t\t输入与蔬菜商品相对应的字母编号\n");
        	printf("\t(a)洋蓟\t\t\t\t(b)甜菜\n");
        	printf("\t(c)胡萝卜\t\t\t(m)查看订单\n");
        	printf("\t\t\t(q)退出订购\n");
        	for(i = 0; i < STAR_COUNT; ++i) // 分割线
        	{
            	printf("*");
        	}
        	putchar('\n');
		}
    	
    	/*
		 * 用户如果输入的非菜单中 a, b, c, m, q 任意一个,
           那么都要判定用户输入的是不合法选项
		*/
    	choice = get_alphabet("请输入菜单选项中对应的字母!!!");
    	
		switch(choice)
        {
            case 'a':
                // puts("洋蓟");
                system("cls");
                calc_price(&goods_weight[0]);
                system("cls");
                flag = 1;
                break;
            case 'b':
                // puts("甜菜");
                system("cls");
                calc_price(&goods_weight[1]);
                system("cls");
                flag = 1;
                break;
            case 'c':
                // puts("胡萝卜");
                system("cls");
                calc_price(&goods_weight[2]);
                system("cls");
                flag = 1;
                break;
            case 'm':
            	system("cls");
				show_goods_bill(goods_weight);
				system("cls");
				flag = 1;
            	break;
            case 'q':
                puts("感谢使用本订购程序!!!");
                exit(0);
                break;
            default:
            	puts("请输入菜单选项中对应的字母!!!");
            	flag = 0;
                break;
        }
        
    }while(1);
}
char get_alphabet(const char *tip)
{
	char choice;
	/*
     * 1.程序输出菜单之后,一定是新的一行的最开始位置;
     * 2.因此本行第一个字符若是 \n \t 等空白符直接读取下一个字符;
	 * 3.若是本行第一个非空白字符是非字母字符时,则舍弃本行;
	 * 3.若是本行第一个非空白字符是字母字符时,但是本行内还有其他非空白字符,舍弃本行;
	 * 4.若是本行第一个非空白字符是字母字符时,本行的其他字符要么是空白字符,要么就是\n,
	     那么本行判定只有一个字符,就可以返回给菜单判断是否是菜单中的选项.
    */
        
    do
    {
    	choice = getchar();
		while(isspace(choice)) // 舍弃\n \t等空白字符
    	{
    		choice = getchar();
    		continue;
		} // 结束循环时 choice 一定不是一个空白字符
			
		if(!isalpha(choice)) // 本行读取到的第一个非空白字符不是字母,舍弃本行
    	{
    		while('\n' != (choice = getchar()))
    		{
    			continue;
			}
    			puts(tip);
		} // 结束 if 时, choice == '\n'
		
		else if(!isspace(next_ch = getchar())) // choice 是一个字母,但是其后一个字符不是\n而是一个非空白字符,判定输入不合法,舍弃本行
		{
			while('\n' != (choice = getchar()))
    		{
    			continue;
			}
    		puts(tip);
		} // 结束 if 时, choice == '\n'
		else
		{
			/*
             * 1.本行读取的第一个字符是一个字母,第二个字符是一个空白字符,
             *   此时若是本行之后的字符都是空白字符,然后是一个\n,那么本行
             *   可以认为只输入了一个字符,就可以返回给菜单判断输入的字母是否匹配
             *       若是本行之后的字符中有非空白字符,那么本行就输入了不止一个字符,
             *   那么判定本行的输入不合法,舍弃本行
            */
            do
            {
                if('\n' == next_ch)
            	{
                    choice = tolower(choice);
					return choice;
                }
                else
                {
                    next_ch = getchar();
                }
            } while(isspace(next_ch))
			while('\n' != (choice = getchar()))
            {
            	continue;
            }
		}
    		
	}while(1);
}
void calc_price(struct menu *bill)
{
	double unit_weight = 0.0; // 单次订购的商品重量
    printf("输入需要订购的%s的重量(单位:磅): ", bill->goods);
    
    /*
	 * 以下程序代码存在问题：
	 * 1. 当用户输入 非数字字符时,都会导致计算商品重量结束;
	 *    例如 : @ / * 等 while(1 == scanf("%lf", &unit_weight)) 都会直接结束
	 * 2. 当用户在同一行输入多个数字,以空白字符隔开时,
	 *    按下回车后,会导致程序将每一个数字都读取并处理.
	 *    例如: 10 20 30 40 50 60
	            程序应当只读取 10 进行处理,但是实际上
				以上 6 个数都会被读取被处理
	*/
    /*while(1 == scanf("%lf", &unit_weight))
    {
    	bill->weight += unit_weight;
        if(bill->weight < 0)
        {
            bill->weight = 0.0; // 商品的重量不能为负值
        }
        printf("当前订购%s的重量为%.2f磅,共计%.2f美元\n", bill->goods, bill->weight, bill->unit_price * bill->weight);
        printf("若需要继续订购%s,输入需要订购的重量(单位:磅)或者输入 # 结束订购: ", bill->goods);
    }
    getchar(); // 舍弃输入的 # 字符,不然导致回退菜单时,出现错误输入的提示*/
    
    /*
	 * 针对以上问题,做出如下修改：
	*/
	do
	{
		if(1 == scanf("%lf", &unit_weight))
		{
			bill->weight += unit_weight;
        	if(bill->weight < 0)
        	{
            	bill->weight = 0.0; // 商品的重量不能为负值
        	}
        	printf("当前订购%s的重量为%.2f磅,共计%.2f美元\n", bill->goods, bill->weight, bill->unit_price * bill->weight);
        	printf("若需要继续订购%s,输入需要订购的重量(单位:磅)或者输入 # 结束订购: ", bill->goods);
        	
        	while('\n' != getchar()) // 舍弃同一行之后未被读取的字符
        	{
        		continue;
			}
		}
		else // 用户在本行输入的不是数字,而是非数字字符
		{
			if('#' == getchar())
			{
				if('\n' == getchar())
				{
					break;
				}
				printf("输入需要订购的重量(单位:磅)或者输入 # 结束订购: ");
				while('\n' != getchar()) // 舍弃同一行之后未被读取的字符
        		{
        			continue;
				}
			}
			else
			{
				printf("输入需要订购的重量(单位:磅)或者输入 # 结束订购: ");
				while('\n' != getchar()) // 舍弃同一行之后未被读取的字符
        		{
        			continue;
				}
			}
		}
	}while(1);
}
void show_goods_bill(struct menu *bill)
{
	/*
     * total_price 商品总的价格
     * total_weight 商品总的重量
     * extra_expense 商品的运费和包装费
     * discount 商品的折扣
	*/
	int i = 0, back = 1;
	char choice;
	double total_price = 0.0, total_weight = 0.0, extra_expense = 0.0, discount = 0.0;
	
	for(i = 0; i < STAR_COUNT; ++i) // 分割线
    {
        printf("*");
    }
    putchar('\n');
	
	printf("  商品名称  |   单  价   |   重  量   |  商品总价\n");
	for(i = 0; i < GOODS_COUNT; ++i)
	{
		total_price += (bill+i)->unit_price * (bill+i)->weight;
		total_weight += (bill+i)->weight;
		printf("%-12s|%12.2f|%12.2f|%12.2f\n", (bill+i)->goods, (bill+i)->unit_price, (bill+i)->weight, (bill+i)->unit_price * (bill+i)->weight);
	}
	
	if(total_price > GOODS_DISCOUNT_PART) // 计算商品折扣
	{
		discount = total_price * GOODS_DISCOUNT_RATE;
	}
	
	if(total_weight <= 0.0) // 计算运费和包装费在 0.0 时
	{
		extra_expense = 0.0;
	}
	else if(total_weight <= EXTRA_WEIGHT_PART_ONE) // 计算运费和包装费在 (0.0, 5.0]
	{
		extra_expense = EXTRA_EXPENSE_PART_ONE;
	}
	else if(total_weight <= EXTRA_WEIGHT_PART_TWO) // 计算运费和包装费在 (5.0, 20.0]
	{
		extra_expense = EXTRA_EXPENSE_PART_TWO;
	}
	else // 计算运费和包装费在 20.0 以上
	{
		extra_expense = EXTRA_EXPENSE_PART_TWO + (total_weight - EXTRA_WEIGHT_PART_TWO) * EXTRA_EXPENSE_PART_THREE;
	}
	
	for(i = 0; i < STAR_COUNT; ++i) // 分割线
    {
        printf("*");
    }
    putchar('\n');
	
	printf("商品的运费和包装费为: %.2f\n", extra_expense);
	printf("订单的总价格为:       %.2f\n", total_price + extra_expense);
	printf("订单的折扣金额为:     %.2f\n", discount);
	printf("订单应支付的金额为:   %.2f\n", total_price + extra_expense - discount);

	for(i = 0; i < STAR_COUNT; ++i) // 分割线
    {
        printf("*");
    }
    putchar('\n');

    /*
     * 返回菜单 功能说明:
     * 1. 用户输入字母 q (或者 Q 也可以) ,按下回车返回菜单;
     * 2. 用户输入的字母 q 之前是一个 \n ,即本行的第一个字母是 q ;
     * 3. 用户输入的字母 q 之后应该为 \n ,即本行的最后一个字母是 \n;
     * 4. 若是用户输入的字母 q 之后还有 空格等空白字符 然后才是 \n ,
	      则也要视为用户选择返回菜单
	*/

	printf("输入 q 返回菜单: ");
	do
	{
		choice = get_alphabet("输入 q 返回菜单: ");
		if('q' == choice)
		{
			break;
		}
		printf("输入 q 返回菜单: ");
	}while(1);
}