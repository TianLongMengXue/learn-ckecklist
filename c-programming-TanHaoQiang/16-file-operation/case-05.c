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

	struct student stu[4] = {0, "snow", "man", 18,
                             1, "yu", "female", 19,
                             2, "lian", "female", 19,
                             3, "li", "man", 20};
    struct student temp[4];

	FILE *stream = fopen("./case-05.dat", "w+");

	if (NULL == stream)
	{
		puts("文件打开失败!!!");
		exit(0);
	}

	fwrite(stu, sizeof(struct student), 4, stream);

    if (-1L == ftell(stream))
    {
        puts("文件错误!!!");
        exit(0);
    }
    else 
    {
        printf("%ld\n", ftell(stream));
    }

	rewind(stream); // 输出到文件后,文件标记指向的是文件尾的位置,需要将文件标记移至文件头的位置

    // fread(temp, sizeof(struct student), 4, stream);

    fseek(stream, 3 * sizeof(struct student), 0); // 将文件标记相对于文件头向前移动 3 个 "struct student" 类型的长度

	fread(&temp[0], sizeof(struct student), 1, stream);

    fseek(stream, -3 * sizeof(struct student), 2); // 将文件标记相对于文件尾后退 3 个 "struct student" 类型的长度

    fread(&temp[1], sizeof(struct student), 1, stream);

    rewind(stream);

    fread(&temp[2], sizeof(struct student), 1, stream);

    fseek(stream, sizeof(struct student), 1); // 将文件标记相对当前位置向前移动 1 个 "struct student" 类型的长度

    fread(&temp[3], sizeof(struct student), 1, stream);

	for (int i = 0; i < 4; ++i)
		printf("id:%d, name:%s, sex:%s, age:%d\n", temp[i].id, temp[i].name, temp[i].sex, temp[i].age);

	fclose(stream);

	return 0;
}
/*
	id:3, name:li, sex:man, age:20
	id:1, name:yu, sex:female, age:19
	id:0, name:snow, sex:man, age:18
	id:2, name:lian, sex:female, age:19
*/
