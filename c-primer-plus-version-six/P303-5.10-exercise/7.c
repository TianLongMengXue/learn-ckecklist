#include <stdio.h>
int main(void)
{
    char c1, c2;
    int diff;
    float num;
    c1 = 'S'; // 83
    c2 = 'O'; // 79
    diff = c1 - c2; // 4
    num = diff; // 4.0
    printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num); // SOS:4 4.00
	return 0;
}