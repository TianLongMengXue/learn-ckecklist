#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40]; // name是一个可容纳40个字符的数组
	printf("Hi! What's your first name?\n");
	scanf("%s", name); // 输入一个字符串,但是不能有空格
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	// size = sizeof(name);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n",name, volume);
	printf("Also, your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n", size);
	return 0;
}