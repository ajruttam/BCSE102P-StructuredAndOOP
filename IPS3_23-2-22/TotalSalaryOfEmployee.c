/************************************************************************
Calculate total Salary of an Employee (BS, HRA, and DA)

Question: In a company an employee is paid under 
	• If his BS < 1500, then HRA = 10% of BS and DA = 90% of BS
	• Else BS > 1500, then HRA = 500 and DA = 98% of BS

Input:
BS

Output:
Net Salary (BS + HRA + DA)
************************************************************************/

#include <stdio.h>
int main()
{
	int bs;
	float ns,hra,da;
	printf("Enter Basic Salary: ");
	scanf("%d",&bs);
	if (bs<1500){
		hra = 0.1*bs;
		da = 0.9*bs;
	}
	else{
		hra = 500;
		da = 0.98*bs;
	}
	ns = bs + hra + da;
	printf("Net Salary is %.2f",ns);
	return 0;
}
