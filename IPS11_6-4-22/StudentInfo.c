/************************************************
Write a C Program to Store Information of ten Students Using Structure Information:  name, regno, branch, grade
************************************************/

#include <stdio.h>
struct student
{
	char name[20], reg_no[9], branch[5], grade;
} students[10];

int main()
{
	for (int i = 0; i < 10; i++)
	{
		printf("Enter Name, Reg.no., branch, grade of Student %d: ", i + 1);
		scanf("%s", students[i].name);
		scanf("%s", students[i].reg_no);
		scanf("%s", students[i].branch);
		scanf(" %c", &students[i].grade);
	}
	return 0;
}
