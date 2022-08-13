/***************************************************
Calculate Simple Interest using “for” Statement
***************************************************/

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of accounts for finding simple interest: ");
	scanf("%d",&n);
	for (int j = 0; j < n; j++){
		int p,r,t;
		float i;
		printf("Enter principal, Rate and No. of years: ");
		scanf("%d %d %d", &p, &r, &t);
		i = (p*r*t)/100.0;
		printf("Simple interest is %.2f\n",i);
	}
	return 0;
}
