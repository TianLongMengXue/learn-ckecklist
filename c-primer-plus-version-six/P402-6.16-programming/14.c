#include <stdio.h>
#define length 8
int main(void)
{
    double arr1[length] = {0.0}, arr2[length] = {0.0};
    int i = 0, j = 0;
    while(i < length)
        scanf("%lf", &arr1[i++]);
    for(i = 0; i < length; ++i)
    	printf("%-8.6f ", arr1[i]);
    printf("\n");
    /* 方式一 */
    /*for(i = 0; i < length; ++i)
    {
        for(j = 0; j <= i; ++j)
            arr2[i] += arr1[j];
    }*/
    /* 方式二 */
    for(i = 1, arr2[0] = arr1[0]; i < length; ++i)
        arr2[i] = arr2[i-1] + arr1[i];
    for(i = 0; i < length; ++i)
    	printf("%-8.6f ", arr2[i]);
    printf("\n");
    return 0;
}