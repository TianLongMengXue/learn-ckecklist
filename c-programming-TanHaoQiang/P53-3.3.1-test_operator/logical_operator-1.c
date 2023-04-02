#include <stdio.h>
int main()
{
	int i = 10, k = 20, m;
	m = (11 > i) && (k = 8);
	printf("m = %d, k = %d\n", m, k); // m = 1, k = 8
    
    m = (11 > i) && (k = 0);
    printf("m = %d, k = %d\n", m, k); // m = 0, k = 0
    
	m = (7 > i) && (k = 8);
	printf("m = %d, k = %d\n", m, k); // m = 0, k = 20
    
    m = !i;
    printf("m = %d\n", m); // m = 0
    return 0;
}