#include <stdio.h>
int main(void)
{
	char ch;
	while ( (ch = getchar()) != '#' )
	{
        if('b' == ch)
        {
            printf("Step 1\n");
            break;
        }
        else
        {
            switch(ch)
        	{
            	case '\n':
                    break;
            	case 'c':
                    printf("Step 1\n");
                    break;
                case 'h':
                    printf("Step 1\n");
                    printf("Step 3\n");
                    break;
                default:
                    printf("Step 1\n");
                    printf("Step 2\n");
                    printf("Step 3\n");
                    break;
        	}
        }
	}
	printf("Done\n");
	return 0;
}