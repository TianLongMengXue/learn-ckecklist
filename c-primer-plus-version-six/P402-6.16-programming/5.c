#include <stdio.h>
int main(void)
{
    char ch, col_ch = 'A';
    int total_row = 0, row = 0, col = 0;
    scanf("%c", &ch);
    total_row = (int)(ch - 'A' + 1); // 确定总的行数
    for(row = 0; row < total_row; ++row)
    {
        col_ch = 'A';
        for(col = 0; col < total_row - row - 1; ++col)
        	printf(" ");
        for(col = 0; col <= row; ++col)
            printf("%c", col_ch+col);
        for(col = row - 1; col >= 0; --col)
            printf("%c", col_ch+col);
        printf("\n");
    }
    return 0;
}