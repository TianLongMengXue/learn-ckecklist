#include <stdio.h>
#define PINT_TO_CUP 2
#define CUP_TO_OUNCE 8
#define OUNCE_TO_LADLE 2
#define LADLE_TO_TEASPOON 3
int main(void)
{
    double cup;
    printf("How many cups do you need : ");
    scanf("%lf", &cup);
    printf("%.2f cup is %.2f pint\n", cup, cup / PINT_TO_CUP);
    printf("%.2f cup is %.2f ounce\n", cup, cup * CUP_TO_OUNCE);
    printf("%.2f cup is %.2f ladle\n", cup, cup * CUP_TO_OUNCE * OUNCE_TO_LADLE);
    printf("%.2f cup is %.2f teaspoon\n", cup, cup * CUP_TO_OUNCE * OUNCE_TO_LADLE * LADLE_TO_TEASPOON);
    return 0;
}