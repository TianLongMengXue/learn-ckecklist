/* 假设你正在爬楼梯。需要 ​​n​​ 阶你才能到达楼顶。
   每次你可以爬 ​​1​​​ 或 ​​2​​ 个台阶。你有多少种不同的方法可以爬到楼顶呢？*/
#include<stdio.h>
int climbStairs(int num);
int climbStairs2(int num);
int main(void){
	int num = 4;
	printf("%d", climbStairs(num));
	printf("\n");
	printf("%d", climbStairs2(num));
	return 0;
}
int climbStairs(num){
	if (0 == num || 1 == num) return 1;
	else return (climbStairs(num - 1) + climbStairs(num - 2));
}
int climbStairs2(int num){
	int dp[num + 1];
	int i = 0;
	dp[0] = 1;
	dp[1] = 1;
	for(i = 2; i <= num; ++i) dp[i] = dp[i - 1] + dp[i - 2];
	return dp[num];
}
