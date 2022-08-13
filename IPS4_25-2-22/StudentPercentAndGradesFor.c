/***************************************************
Calculate Student percentage and Grades using “for” Statement.
***************************************************/

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		int m1,m2,m3,m4,m5,total;
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
		printf("\n");
	}
	return 0;
}
