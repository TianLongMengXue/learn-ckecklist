#include <stdio.h>
double Temperatures(double fahrenheit)
{
	double celsius = 0, kelvin = 0;
	const double CELSIUS = 32.0;
	const double KELVIN = 273.16;
	celsius = 5.0 / 9.0 * (fahrenheit - CELSIUS);
	kelvin = celsius + KELVIN;
	printf("华氏温度 %.2f 是 %.2f 摄氏温度，%.2f 开氏温度\n", fahrenheit, celsius, kelvin);
}
int main(void)
{
	double fahrenheit = 0;
	int flag;
	printf("请输入华氏温度: ");
	flag = scanf("%lf", &fahrenheit);
	while(1 == flag)
	{
		Temperatures(fahrenheit);
		printf("请输入华氏温度(输入 q 退出): ");
		flag = scanf("%lf", &fahrenheit);
	}
	return 0;
}