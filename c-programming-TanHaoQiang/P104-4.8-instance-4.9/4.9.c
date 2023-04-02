#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, disc, x1, x2, realpart, imagpart;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    printf("The equation ");
    if(fabs(a) <= 1e-6) // fabs(x) <= 1e-6 其实就相当于数学概念中的 x = 0
        printf("is not a quadratic\n");
    else
    {
        disc = pow(b, 2) - 4 * a * c;
        if(fabs(disc) <= 1e-6) // disc == 0, 两个相等的实根
            printf("has two equal roots: %8.4f\n", -b/(2.0 * a));
        else
        {
            if(disc > 1e-6) // disc > 0, 两个不相等的实根
            {
                x1 = (-b + sqrt(disc)) / (2.0 * a);
                x2 = (-b - sqrt(disc)) / (2.0 * a);
                printf("has distinct real roots: %8.4f and %8.4f\n", x1, x2);
            }
            else
            {
                realpart = -b / (2.0 * a);
                imagpart = sqrt(-disc) / (2.0 * a);
                printf("has complex roots:\n");
                printf("%8.4f+%8.4fi\n", realpart, imagpart);
                printf("%8.4f-%8.4fi\n", realpart, imagpart);
            }
        }
    }
    return 0;
}