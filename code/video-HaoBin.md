# video-learn-郝斌

## 8、1除n求和

```C
#include <stdio.h>
int main()
{
    int i = 0;
    float sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum += (1.0 / i); // 隐式类型转化
    }
    printf("sum = %f\n", sum);
    return 0;
}
```

```C
#include <stdio.h>
int main()
{
    int i = 0;
    float sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum += (1 / (float) i); // 强制类型转化
    }
    printf("sum = %f\n", sum);
    return 0;
}
```

```C
#include <stdio.h>
int main()
{
    float i = 0,  sum = 0; // 直接定义变量i为float类型
    for (i = 1; i <= 100; i++)
    {
        sum += (1 / i);
    }
    printf("sum = %f\n", sum);
    return 0;
}
```

## 9、函数递归

```C
/* 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
   每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？*/
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
```

## 10、1到100内全部奇数的平均值

```C
#include <stdio.h>
int main()
{
    int i = 0, sumOdd = 0, sumEven = 0, countOdd = 0, countEven = 0;
    for (i = 0; i <= 100; i++)
    {
        if (1 == (i % 2)) // 也可以写成 0!=(i%2) 毕竟自然数中不是奇数就是偶数
        {    
            sumOdd += i;
            countOdd++;
        }
        else
        {
            sumEven += i;
            countEven++;
        }
    }
    printf("sumOdd = %d, countOdd = %d, averageOdd = %.2f\n", sumOdd, countOdd, (float)sumOdd/countOdd);
    printf("sumEven = %d, countEven = %d, averageEven = %.2f\n", sumEven, countEven, (float)sumOdd/countOdd);
    return 0;
}
```

## 11、1到100求和

```C
#include <stdio.h>
int main()
{
    int sum = 0, i = 1;
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
```

## 12、回文数

```C
#include <stdio.h>
int main()
{
    int value = 0, invert = 0, temp = 0;
    scanf("%d", &value);
    temp = value;
    while (temp)
    {
        invert = invert * 10 + temp % 10;
        temp = temp / 10;
    }
    if (invert == value) printf("%d是一个回文数! \n", value);
    else printf("%d不是一个回文数!\n", value);
    return 0;
}
```

## 13、斐波那契数列

```C
#include <stdio.h>
int main()
{
    int f1 = 1, f2 = 2, f3 = 0, number = 0, temp = 0;
    scanf("%d", &number);
    if (0 >= number) printf("非法输入!");
    else if (1 == number) f3 = f1;
    else if (2 == number) f3 = f2;
    else
    {
        for (temp = 3; temp <= number; temp++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("第%d个斐波那契数是: %d\n", number, f3);
    return 0;
}
```

## 14、一元二次方程

```C
#include <stdio.h>
#include <math.h>
int main()
{
    double a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;
    char ch_continue;
    do
    {
        printf("a = ");
        scanf("%lf", &a);

        printf("b = ");
        scanf("%lf", &b);

        printf("c = ");
        scanf("%lf", &c);

        delta = pow (b, 2.0) - 4 * a * c;

        if (delta > 0)
        {
            x1 = (- b + sqrt(delta)) / (2 * a);
            x2 = (- b - sqrt(delta)) / (2 * a);
            printf("两个解 x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        }
        else if (0 == delta)
        {
            x1 = x2 = (- b) / (2 * a);
            printf("两个相同解 x1 = x2 = %.2lf\n", x1);
        }
        else printf("无解！\n");

        printf("是否继续解方程? (Y/N)\n");
        scanf(" %c", &ch_continue);
    } while ('y' == ch_continue || 'Y' == ch_continue);

    return 0;
}
```

## 15、合理设计函数求素数

```C
#include <stdio.h>
int main()
{
    int val, i, j;
    scanf("%d", &val);
    for (i = 2; i <= val; ++i)
    {
        for (j = 2; j < i; ++j)
        {
            if (0 == i % j)
                break;
        }
        if (j == i)
            printf("%d\n", i);
    }
    return 0;
}
```

```C
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int m);
int main()
{
    int val, i, j;
    scanf("%d", &val);
    for (i = 2; i <= val; ++i)
    {

        if (isPrime(i))
            printf("%d\n", i);
    }
    return 0;
}
bool isPrime(int m)
{
    int j;
    for (j = 2; j < m; ++j)
    {
        if (0 == m % j)
            break;
    }
    if (m == j)
        return true;
    else
        return false;
}
```

```C
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int m);
void printPrime(int val);
int main()
{
    int val;
    scanf("%d", &val);
    printPrime(val);
    return 0;
}
bool isPrime(int m)
{
    int j;
    for (j = 2; j < m; ++j)
    {
        if (0 == m % j)
            break;
    }
    if (m == j)
        return true;
    else
        return false;
}
void printPrime(int val)
{
    int i;
    for (i = 2; i <= val; ++i)
    {

        if (isPrime(i))
            printf("%d\n", i);
    }    
}
```

## 16、指针和数组下标的关系

```C
#include <stdio.h>
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int *p = array;
    printf("*p = %d, array[0] = %d\n", *p, array[0]);
    printf("p = %#X, array = %#X\n", p, array);

    p++;
    printf("*p = %d, array[1] = %d\n", *p, array[1]);
    printf("p = %#X, array = %#X\n", p, &array[1]);

    p++;
        printf("*p = %d, array[2] = %d\n", *p, array[2]);
        printf("p = %#X, array = %#X\n", p, &array[2]);

    p++;
        printf("*p = %d, array[3] = %d\n", *p, array[3]);
        printf("p = %#X, array = %#X\n", p, &array[3]);

    p++;
        printf("*p = %d, array[4] = %d\n", *p, array[4]);
        printf("p = %#X, array = %#X\n", p, &array[4]);

    return 0;
}
/*
    *p = 1, array[0] = 1
    p = 0X91C3AD20, array = 0X91C3AD20
    *p = 2, array[1] = 2
    p = 0X91C3AD24, array = 0X91C3AD24
    *p = 3, array[2] = 3
    p = 0X91C3AD28, array = 0X91C3AD28
    *p = 4, array[3] = 4
    p = 0X91C3AD2C, array = 0X91C3AD2C
    *p = 5, array[4] = 5
    p = 0X91C3AD30, array = 0X91C3AD30
*/
```

```C
#include <stdio.h>
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int i = 0;

    for (i = 0; i < 5; ++i)
        printf("array[%d] = %d\n", i, array[i]);

    for (i = 0; i < 5; ++i)
        printf("*(array+%d) = %d\n", i, *(array+i));

    return 0;
}
/*
    array[0] = 1
    array[1] = 2
    array[2] = 3
    array[3] = 4
    array[4] = 5
    *(p+0) = 1
    *(p+1) = 2
    *(p+2) = 3
    *(p+3) = 4
    *(p+4) = 5
*/
```

## 17、sizeof指针变量

```C
#include <stdio.h>
int main()
{
    char ch = 'A';
    int a = 10;
    double b = 12;
    char *p = &ch;
    int *q = &a;
    double *r = &b;

    printf("%ld %ld %ld\n", sizeof(ch), sizeof(a), sizeof(b));

    printf("%ld %ld %ld\n", sizeof(p), sizeof(q), sizeof(r));

    return 0;
}
```

## 18、malloc创建数组

```C
#include <stdio.h>
#include <malloc.h>
int main()
{
    int array[5]; // 创建一个静态数组,若每个元素占 sizeof(int)=4 的字节数,数组一共占用20个字节,每4个字节存储一个元素
    int length, *pArray, i;

    // 动态的创建一个数组
    printf("请输入你要存放的元素个数:");
    scanf("%d", &length);
    pArray = (int *) malloc (4 * length);
    /*
        动态的创建一个一维数组,该一维数组的长度为length,数组名为pArray,该数组的每个元素是int类型,类似于int pArray[length];
    */

    // 对动态数组进行赋值操作
    for (i = 0; i < length; ++i)
        scanf("%d", &pArray[i]);

    // 将动态数组的元素输出
    for (i = 0; i < length; ++i)
        printf("%d\n", pArray[i]);

    // 释放掉动态数组占用的内存空间
    free(pArray);

    return 0;
}
```

## 19、指针和结构体

```C
#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    char sex;
    short age;
};
void inputStudent(struct student);
void inputStudent_1(struct student *);
void printStudent(struct student);
void printStudent_1(struct student *);
int main()
{
    struct student stu;

    // inputStudent(stu);
    // printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 输出乱码,通过将结构的作为形参传递无法跨函数调用

    inputStudent_1(&stu);
    printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 正常输出 snow M 18

    printStudent(stu);
    printStudent_1(&stu);

    return 0;
}
void inputStudent(struct student stu)
{
    strcpy(stu.name, "snow");
    stu.sex = 'M';
    stu.age = 18;
    /*
        inputStudent 函数中的结构体变量stu相当于main函数中结构体变量stu的一份复印件,
        因此对 inputStudent 函数中的结构体变量stu进行赋值操作不会影响到main函数中的结构体变量stu,
        且 inputStudent 函数执行完毕,作为该函数局部变量的stu就会被释放
    */
}
void inputStudent_1(struct student *pstu) // 64位编译系统下,sizeof(pstu) = 8
{
    strcpy(pstu->name, "snow"); // 等价于 strcpy((*pstu).name, "snow");
    pstu->sex = 'M'; // 等价于 (*pstu).sex = 'M';
    pstu->age = 18; // 等价于 (*pstu).age = 18;
}
void printStudent(struct student stu)
{
    printf("%s %c %d\n", stu.name, stu.sex, stu.age); // 正常输出 snow M 18
    /*
        printStudent 函数中的结构体变量stu相当于main函数中结构体变量stu的一份复印件,
        因此 printStudent 函数中的结构体变量存储的内容是和main函数中结构体变量stu一模一样的
    */
}
void printStudent_1(struct student *pstu)
{
    printf("%s %c %d\n", pstu->name, pstu->sex, pstu->age); // 正常输出 snow M 18
    /*
        跨函数输出一个结构体变量的内容,既可以将结构体变量作为参数,也可以将结构体的地址作为参数
    */
}
```

## 20、冒泡排序

```C
/*
    将一组数据按照升序排列 —— 冒泡排序
    2, 0, -9, 12, 5, 4 一共6个数据
    将第一个数据和第二个数据进行比较,若是前者大于后者,则交换这两个数据的位置;
    将第二个数据和第三个数据进行比较,若是前者大于后者,则交换这两个数据的位置;
    ......
    将第五个数据和第六个数据进行比较,若是前者大于后者,则交换这两个数据的位置;
    到这里第一轮排序完成,此时这组数据的第六个数据,就是这组数据的最大值,
    之后再以同样的方式比较前五个数据,将前五个数据中最大的那个数据放在第五个位置;
    .......
    最后再以同样的方式比较前两个数据,将前两个数据中最大的那个数据放在第二个位置,第一个位置上的就是最小的数据;
    这样一共进行了五轮排序,这组数据就是按照升序排列了。
*/
/*
    程序执行冒泡排序的过程:

    声明一个变量i作为循环的次数,变量j作为前者数据的下标,j+1作为后者数据的下标,以及存储数据的数组a;

    第一轮排序时,变量i从0开始,变量j从0开始,比较a[j]和a[j+1]的大小,即比较第一个数据和第二个数据的大小;
    之后变量j递增至2,比较a[j]和a[j+1]的大小,即比较第二个数据和第三个数据的大小;
    之后变量j递增至3,比较a[j]和a[j+1]的大小,即比较第三个数据和第四个数据的大小;
    之后变量j递增至4,比较a[j]和a[j+1]的大小,即比较第四个数据和第五个数据的大小;
    之后变量j递增至5,比较a[j]和a[j+1]的大小,即比较第五个数据和第六个数据的大小;
    至此第一轮排序结束,此时a[5]是这个数组中值最大的元素,即第六个数据是这组数据中最大的.

    第二轮排序时,变量i从1开始,变量j从0开始,比较a[j]和a[j+1]的大小,即比较第一个数据和第二个数据的大小;
    之后变量j递增至2,比较a[j]和a[j+1]的大小,即比较第二个数据和第三个数据的大小;
    之后变量j递增至3,比较a[j]和a[j+1]的大小,即比较第三个数据和第四个数据的大小;
    之后变量j递增至4,比较a[j]和a[j+1]的大小,即比较第四个数据和第五个数据的大小;
    至此第二轮排序结束,此时a[4]是这个数组中第二大的元素,即第五个数据是这组数据中第二大的.

    第三轮排序时,变量i从2开始,变量j从0开始,比较a[j]和a[j+1]的大小,即比较第一个数据和第二个数据的大小;
    之后变量j递增至2,比较a[j]和a[j+1]的大小,即比较第二个数据和第三个数据的大小;
    之后变量j递增至3,比较a[j]和a[j+1]的大小,即比较第三个数据和第四个数据的大小;
    至此第三轮排序结束,此时a[3]是这个数组中第三大的元素,即第四个数据是这组数据中第三大的.

    第四轮排序时,变量i从3开始,变量j从0开始,比较a[j]和a[j+1]的大小,即比较第一个数据和第二个数据的大小;
    之后变量j递增至2,比较a[j]和a[j+1]的大小,即比较第二个数据和第三个数据的大小;
    至此第三轮排序结束,此时a[2]是这个数组中第四大的元素,即第三个数据是这组数据中第四大的.

    第五轮排序时,变量i从4开始,变量j从0开始,比较a[j]和a[j+1]的大小,即比较第一个数据和第二个数据的大小;
    至此第五轮排序结束,此时a[1]是这个数组中第五大的元素,即第二个数据是这组数据中第五大的,
    而a[0]是这个数组中值最小的元素,即第一个数据是这组数据中最小的.
*/
#include <stdio.h>
int main()
{
    int a[6] = {2, 0, -9, 12, 5, 4}, length = 6;
    int i, j, temp; 

    for (i = 0; i < length - 1; ++i) // 排序的轮数为总的数据数减一
    {
        /*
            1、第一轮时,j的最大值为4,j+1为5,不会出现下标越界
            2、每一轮结束后最后一个数据都不再参与排序,因此新的一轮排序开始就要减少一次比较
        */
        for (j = 0; j < (length - 1 - i); ++j)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (i = 0; i < length; ++i)
        printf("%d\n", a[i]);
    /*
        程序运行结果:
        -9
        0
        2
        4
        5
        12
    */
    return 0;
}
```

## 21、枚举enum

```C
#include <stdio.h>
enum week
{
     MONDAY,
     TUESDAY,
     WEDNESDAY,
     THURSDAY,
     FRIDAY,
     SATURDAY,
     SUNDAY
};
void f(enum week day)
{
    switch(day)
     {
         case MONDAY: printf("Monday\n"); break;
         case TUESDAY: printf("Tuesday\n"); break;
         case WEDNESDAY: printf("Wednesday\n"); break;
         case THURSDAY: printf("Thursday\n"); break;
         case FRIDAY: printf("Friday\n"); break;
         case SATURDAY: printf("Saturday\n"); break;
         case SUNDAY: printf("Sunday\n"); break;
         default: printf("Error!\n");
     }
     // 以上的switch也可以改成下面的写法
     switch(day)
     {
         case 0: printf("Monday\n"); break;
         case 1: printf("Tuesday\n"); break;
         case 2: printf("Wednesday\n"); break;
         case 3: printf("Thursday\n"); break;
         case 4: printf("Friday\n"); break;
         case 5: printf("Saturday\n"); break;
         case 6: printf("Sunday\n"); break;
         default: printf("Error!\n");
     }
}
int main()
{
    f(FRIDAY); // 若是写 f(4) 就是错误的,f函数的参数只能是 enum week 中声明的值
     return 0;
}
```
