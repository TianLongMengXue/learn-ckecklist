#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	struct student
	{
        int id;
		char name[12];
		char sex[8];
		int age;
	};
    // sizeof(struct student) = 4 + 12 + 8 + 4 = 28 字节

	struct student stu[4] = {0, "snow", "man", 18,
                             1, "yu", "female", 19,
                             2, "lian", "female", 19,
                             3, "li", "man", 20};
    struct student temp[4];

	FILE *stream = fopen("./case-06.dat", "w+");

	if (NULL == stream)
	{
		puts("文件打开失败!!!");
		exit(0);
	}

	fwrite(stu, sizeof(struct student), 4, stream);
	/*
		输入到文件 case-06.dat 的字节数为 4 * 28 = 112 字节
		此时文件标记的位置为文件尾,即 EOF 的位置
	*/

    if (-1L == ftell(stream))
    {
        puts("文件错误!!!");
        exit(0);
    }
    else  printf("%ld\n", ftell(stream));
	/*
		此时 ftell 函数输出的文件标记相对于文件头的偏移量为 112 字节
		即 此时的文件标记虽然指向 EOF 但是 EOF 并不当做一个完整的字节,
		因此 ftell 函数处理时仍将最后一个有效字节作为文件标记的最终指向
	*/

	rewind(stream); // 输出到文件后,文件标记指向的是文件尾的位置,需要将文件标记移至文件头的位置
	
	if (-1L == ftell(stream))
    {
        puts("文件错误!!!");
        exit(0);
    }
    else  printf("%ld\n", ftell(stream));
	/*
		此时 ftell 函数输出的文件标记相对于文件头的偏移量为 0 字节
	*/

    fseek(stream, 3 * sizeof(struct student), 0); // 将文件标记相对于文件头向前移动 3 个 "struct student" 类型的长度
	
	if (-1L == ftell(stream))
    {
        puts("文件错误!!!");
        exit(0);
    }
    else  printf("%ld\n", ftell(stream));
	/*
		此时 ftell 函数输出的文件标记相对于文件头的偏移量为 84 字节
	*/

	fread(&temp[0], sizeof(struct student), 1, stream);

    fseek(stream, -3 * sizeof(struct student), 2); // 将文件标记相对于文件尾后退 3 个 "struct student" 类型的长度
	
	if (-1L == ftell(stream))
    {
        puts("文件错误!!!");
        exit(0);
    }
    else  printf("%ld\n", ftell(stream));
	/*
		此时 ftell 函数输出的文件标记相对于文件头的偏移量为 28 字节
	*/

    fread(&temp[1], sizeof(struct student), 1, stream);

    rewind(stream);

    fread(&temp[2], sizeof(struct student), 1, stream);

    fseek(stream, sizeof(struct student), 1); // 将文件标记相对当前位置向前移动 1 个 "struct student" 类型的长度
	
	if (-1L == ftell(stream))
    {
        puts("文件错误!!!");
        exit(0);
    }
    else  printf("%ld\n", ftell(stream));
	/*
		此时 ftell 函数输出的文件标记相对于文件头的偏移量为 56 字节
	*/

    fread(&temp[3], sizeof(struct student), 1, stream);

	for (int i = 0; i < 4; ++i)
		printf("id:%d, name:%s, sex:%s, age:%d\n", temp[i].id, temp[i].name, temp[i].sex, temp[i].age);

	fclose(stream);

	return 0;
}
/*
	112
	0
	84
	28
	56
	id:3, name:li, sex:man, age:20
	id:1, name:yu, sex:female, age:19
	id:0, name:snow, sex:man, age:18
	id:2, name:lian, sex:female, age:19
*/
