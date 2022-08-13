/****************************************************
Compute quotient and remainder
****************************************************/

#include <stdio.h>
int main()
{
	int a,b,r;
	float q;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	q = a/b;
	printf("Quotient when %d is divided by %d is %.2f\n",a,b,q);
	r = a%b;
	printf("Remainder when %d is divided by %d is %d",a,b,r);
	return 0;
}

