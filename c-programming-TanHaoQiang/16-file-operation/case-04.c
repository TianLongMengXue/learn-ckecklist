#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	struct student
	{
		char name[12];
		char sex[8];
		int age;
	};

	struct student stu[4] = {"snow", "man", 18, "yu", "female", 19, "lian", "female", 19, "li", "man", 20}, temp[4];

	FILE *stream = fopen("./case-04.dat", "w");

	if (NULL == stream)
	{
		puts("文件打开失败!!!");
		exit(0);
	}

	fwrite(stu, sizeof(struct student), 4, stream);
	
	/*for (int i = 0; i < 4; ++i)
		fwrite(&stu[i], sizeof(struct student), 1, stream);*/

	fclose(stream);

	FILE *fp = fopen("./case-04.dat", "r");

	if (NULL == fp)
	{
		puts("文件打开失败!!!");
		exit(0);
	}

	fread(temp, sizeof(struct student), 4, fp);

	/*for (int i = 0; i < 4; ++i)
		fread(&temp[i], sizeof(struct student), 1, fp);*/

	for (int i = 0; i < 4; ++i)
		printf("name:%s,sex:%s,age:%d\n", temp[i].name, temp[i].sex, temp[i].age);

	fclose(fp);

	return 0;
}
/*
	name:snow,sex:man,age:18
	name:yu,sex:female,age:19
	name:lian,sex:female,age:19
	name:li,sex:man,age:20
*/
