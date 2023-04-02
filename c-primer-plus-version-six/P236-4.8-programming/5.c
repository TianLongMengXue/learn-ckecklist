#include <stdio.h>
int main(void)
{
    float speed, volume, seconds;
    printf("please input speed and volume of the files : ");
    scanf("%f %f", &speed, &volume);
    seconds = volume * 8 / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f second ", speed, volume, seconds);
    return 0;
}