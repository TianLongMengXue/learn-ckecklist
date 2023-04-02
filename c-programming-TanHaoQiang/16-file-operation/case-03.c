#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	struct student
	{
		char name[10];
		char sex[10];
		int age;
	};

	struct student stu = {"snow", "man", 18}, temp;

	// char *format = "My name is %s, my sex is %s, my age is %d\n";
	/*
	 	name: snow,---sex: �N�U---age: 32767

		fscanf 中 %s 匹配字符串时,会把逗号 ',' 也做为字符串的一部分,而不是作为普通字符处理,导致后面的变量无法正确匹配成为乱码
	*/
	char *format = "My name is %s my sex is %s my age is %d\n";

	FILE *stream = fopen("./case-03.txt", "w");
	if (NULL == stream)
	{
		puts("文件打开失败!!!");
		exit(0);
	}

	fprintf(stream, format, stu.name, stu.sex, stu.age);

	fclose(stream);

	FILE *fp = fopen("./case-03.txt", "r");
        if (NULL == stream)
        {
                puts("文件打开失败!!!");
                exit(0);
        }

	fscanf(stream, format, temp.name, temp.sex, &temp.age);

	printf("name: %s---sex: %s---age: %d\n", temp.name, temp.sex, temp.age);

	return 0;
}
/*
	name: snow---sex: man---age: 18
*/
