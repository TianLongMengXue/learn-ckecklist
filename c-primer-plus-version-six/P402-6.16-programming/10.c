#include <stdio.h>
int main(void)
{
    int number1 = 0, number2 = 0, max = 0, min = 0, i = 0;
    long sum = 0;
    printf("Enter lower and upper integer limits: ");
    scanf("%d%d", &number1, &number2);
    if(number1 == number2)
        max = min = number1;
    else
    {
        max = number1 > number2 ? number1 : number2;
        min = number1 > number2 ? number2 : number1;
    }
    while(max > min)
    {
        for(i = min, sum = 0; i <= max; ++i)
        	sum += i * i;
    	printf("The sums of the squares from %d to %d is %ld\n", min*min, max*max, sum);
        printf("Enter next set of limits: ");
        scanf("%d%d", &number1, &number2);
        if(number1 == number2)
            max = min = number1;
        else
        {
            max = number1 > number2 ? number1 : number2;
            min = number1 > number2 ? number2 : number1;
        }
    }
    printf("Done!\n");
    return 0;
}