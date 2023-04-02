#include <stdio.h>
#include <string.h>
int main()
{
	char str_1[5], str_2[6], str_3[5];
	scanf("%s%s%s", str_1, str_2, str_3);
	for (int i = 0; i < strlen(str_1); ++i)
	{
		printf("str_1[%d] = %c", i, str_1[i]);
	}
	printf("\n");
	for (int i = 0; i < strlen(str_2); ++i)
        {
                printf("str_2[%d] = %c", i, str_2[i]);
        }
	puts("");
	for (int i = 0; i < strlen(str_3); ++i)
        {
                printf("str_3[%d] = %c", i, str_3[i]);
        }
	puts("");
	return 0;

}
