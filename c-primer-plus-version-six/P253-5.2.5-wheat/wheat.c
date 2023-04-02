#include <stdio.h>
#define SQUARES 64 // 棋盘中方格数
int main(void)
{
    const double CROP = 2E16; // 世界小麦年产粒数
    int count = 1; // 棋盘上第一个方格
    double current = 1, total = 1; // 第一个方格中只有 1 粒谷粒,总谷粒数也是 1
    printf("square\tgrains\ttotal\tfraction of added grains world total\n");
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while(count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current; // 下一个方格中谷粒的数目翻倍
        total = total + current; // 当前方格以及之前的方格中总谷粒数目
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }
    return 0;
}