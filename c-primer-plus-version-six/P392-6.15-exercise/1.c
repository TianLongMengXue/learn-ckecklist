#include <stdio.h>
int main(void)
{
	int quack = 2;
	quack += 5; // quack = quack + 5 = 2 + 5 = 7
	quack *= 10; // quack = quack * 10 = 7 * 10 = 70
	quack -= 6; // quack = quack - 6 = 70 - 6 = 64
	quack /= 8; // quack = quack / 8 = 64 / 8 = 8
	quack %= 3; // quack = quack % 3 = 8 % 3 = 2
	printf("quack += 5 : %d\n", quack += 5);
	printf("quack *= 10 : %d\n", quack *= 10);
	printf("quack -= 6 : %d\n", quack -= 6);
	printf("quack /= 8 : %d\n", quack /= 8);
	printf("quack %= 3 : %d\n", quack %= 3);
	return 0;
}