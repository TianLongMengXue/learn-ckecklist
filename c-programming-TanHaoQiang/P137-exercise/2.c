#include <stdio.h>
#include <math.h>
#include <stdint.h>
int main()
{
    int8_t sign = 1;
    uint64_t count = 0;
    double pi = 0.0, n = 1.0, term = 1.0;
    while(fabs(term) >= 1e-6)
    {

        term = (double)sign / n;
        pi = pi + term;
        n += 2;
        sign = -sign;
        ++count;
    }
    pi = 4.0 * pi;
    printf("(1e-6) pi = %.10f, count = %lld\n", pi, count);
    sign = 1;
    count = 0;
    pi = 0.0;
    n = 1.0;
    term = 1.0;
    while(fabs(term) >= 1e-8)
    {
        term = (double)sign / n;
        pi = pi + term;
        n += 2;
        sign = -sign;
        ++count;
    }
    pi = 4.0 * pi;
    printf("(1e-8) pi = %.10f, count = %lld\n", pi, count);
    return 0;
}