#include <stdio.h>
int main(void)
{
    double money = 1000000.0, lose = 100000.0;
    int i = 0;
    for(i = 1; money >= lose; ++i)
    {
        money *= 1 + 0.08;
        money -= lose;
        printf("第%d年,Chuckie的账户余额为%.3f美元\n", i, money);
    }
    if(money > 0) printf("第%d年,Chuckie会取完账户的钱", i);
    else if(0 == money) printf("第%d年,Chuckie会取完账户的钱", i-1);
    return 0;
}