/*********************************
Swap two numbers
*********************************/

#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	printf("Numbers before swapping\na = %d\nb = %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Numbers after swapping\na = %d\nb = %d",a,b);
	return 0;
}
