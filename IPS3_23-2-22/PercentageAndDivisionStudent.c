/************************************************************************
Compute the total percentage and division of the student

Question: 5 subject marks. Compute percentage. If per >= 60, then 1st division, if 50 <= per < 60, then 2nd division, if 40 <= per < 50, then 3rd division else Fail

Input:
5 subject marks

Output:
Percentage and Division
************************************************************************/

#include <stdio.h>
int main()
{
	int m1, m2, m3, m4, m5, total;
	float per;
	printf("Enter the marks: ");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	per = (m1+m2+m3+m4+m5)/5.0;
	printf("The percentage is %.2f\nThe studest is ",per);
	if (per>=60)
		printf("in First Division");
	else if (per>=50)
		printf("in Second Division");
	else if (per>=40)
		printf("in Third Division");
	else
		printf("Failed");
	return 0;
}
