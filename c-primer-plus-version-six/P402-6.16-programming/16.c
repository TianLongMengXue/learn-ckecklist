#include <stdio.h>
int main(void)
{
    double count_Daphne = 100.0, count_Deirdre = 100.0;
    int i = 0;
    for(i = 1; count_Deirdre <= count_Daphne; ++i)
    {
        count_Daphne += 100.0 * 0.1;
        count_Deirdre *= 1 + 0.05;
        printf("第%2d年,Daphne的投资额为%.3f美元,Deirdre的投资额为%.3f美元\n", i, count_Daphne, count_Deirdre);
    }
    printf("在第%d年, Deirdre 以 %.3f 美元的投资额超过了 Daphne %.3f美元的投资额", i-1, count_Deirdre, count_Daphne);
    return 0;
}