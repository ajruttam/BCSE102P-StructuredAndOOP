/****************************************************
Addition of two floating point numbers
****************************************************/

#include <stdio.h>
int main()
{
	float num1,num2,sum;
	printf("Enter any two floating numbers: ");
	scanf("%f%f",&num1,&num2);
	sum = num1 + num2;
	printf("Sum of numbers %.2f and %.2f is %.2f",num1,num2,sum);
	return 0;
}
