#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main(void)
{
	int16_t ch;
	uint64_t count = 0;

	FILE *fp = NULL;
	fp = fopen("./essay.txt", "r");
	if(NULL == fp)
	{
		exit(1);
	}
	
	while((ch = getc(fp)) != EOF)
	{
		++count;
		
		switch(ch)
		{
			case 0:
				printf("| NULL | %-6hhu", ch);
				break;
			case 1:
				printf("| SOH  | %-6hhu", ch);
				break;
			case 2:
				printf("| STX  | %-6hhu", ch);
				break;
			case 3:
				printf("| ETX  | %-6hhu", ch);
				break;
			case 4:
				printf("| EOT  | %-6hhu", ch);
				break;
			case 5:
				printf("| ENQ  | %-6hhu", ch);
				break;
			case 6:
				printf("| ACK  | %-6hhu", ch);
				break;
			case 7:
				printf("| BELL | %-6hhu", ch);
				break;
			case 8:
				printf("| BS   | %-6hhu", ch);
				break;
			case 9:
				printf("| \\t  | %-6hhu", ch);
				break;
			case 10:
				printf("| \\n  | %-6hhu", ch);
				break;
			case 11:
				printf("| VT   | %-6hhu", ch);
				break;
			case 12:
				printf("| NP   | %-6hhu", ch);
				break;
			case 13:
				printf("| CR   | %-6hhu", ch);
				break;
			case 14:
				printf("| SO   | %-6hhu", ch);
				break;
			case 15:
				printf("| SI   | %-6hhu", ch);
				break;
			case 16:
				printf("| DEL  | %-6hhu", ch);
				break;
			case 17:
				printf("| DC1  | %-6hhu", ch);
				break;
			case 18:
				printf("| DC2  | %-6hhu", ch);
				break;
			case 19:
				printf("| DC3  | %-6hhu", ch);
				break;
			case 20:
				printf("| DC4  | %-6hhu", ch);
				break;
			case 21:
				printf("| NAK  | %-6hhu", ch);
				break;
			case 22:
				printf("| SYN  | %-6hhu", ch);
				break;
			case 23:
				printf("| ETB  | %-6hhu", ch);
				break;
			case 24:
				printf("| CAN  | %-6hhu", ch);
				break;
			case 25:
				printf("| EM   | %-6hhu", ch);
				break;
			case 26:
				printf("| SUB  | %-6hhu", ch);
				break;
			case 27:
				printf("| ESC  | %-6hhu", ch);
				break;
			case 28:
				printf("| FS   | %-6hhu", ch);
				break;
			case 29:
				printf("| GS   | %-6hhu", ch);
				break;
			case 30:
				printf("| RS   | %-6hhu", ch);
				break;
			case 31:
				printf("| US   | %-6hhu", ch);
				break;
			default:
				printf("| %-5c | %-6hhu", ch, ch);
				break;
		}
		
		if(0 == count % 10)
			puts("|");
	}
	fclose(fp);
	return 0;
}