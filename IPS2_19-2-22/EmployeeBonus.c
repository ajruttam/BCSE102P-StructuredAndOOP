/*****************************************************
Compute the bonus of the employee

If experience is greater than or equal to 3 years, add 25000 to salary as bonus.
*****************************************************/

#include <stdio.h>
int main()
{
	int salary,join_yr,bonus = 25000,cur_yr = 2022;
	printf("Enter the salary and joining year of the employee: ");
	scanf("%d %d",&salary,&join_yr);
	printf("Salary of the employee is ");
	if (cur_yr - join_yr >= 3)
		printf("%d",salary+bonus);
	else
		printf("%d",salary);
	return 0;
}