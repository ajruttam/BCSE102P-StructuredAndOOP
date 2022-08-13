/***************************************************
Calculate Overtime pay of employee using “While” Statement

Question:
WAP to calculate overtime pay of 10 employees. Overtime is paid at the rate if Rs 120/- per hour worked above 40 hours. Assume that employees do not work for fractional part of an hour. 
***************************************************/

#include <stdio.h>
int main()
{
	int n = 10;
	while (n--)
	{
		int hours;
		printf("Enter the number of hours employee %d worked: ", 10 - n);
		scanf("%d", &hours);
		if (hours > 40)
			printf("The overtime for employee %d is %d\n", 10 - n, (hours - 40) * 120);
		else printf("The employee %d hasn't done any overtime\n", 10 - n);
	}
	return 0;
}
