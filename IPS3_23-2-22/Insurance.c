/************************************************************************
Compute driver is insured or not

Conditions:
	i. If the driver is married, then give insurance
	ii. If the driver is male, unmarried and age is greater than 30, then give insurance
	iii. If the driver is female, unmarried and age is greater than 25, then give insurance

Input:
Marital Status, age, gender

Output:
Insured or Not insured
************************************************************************/

#include <stdio.h>
int main()
{
	char marital, gender;
	int age;
	printf("Enter the marital status of the driver (U for unmarried,M for married): ");
	scanf("%c", &marital);
	printf("Enter the age of the driver: ");
	scanf("%d", &age);
	printf("Enter the gender of the driver (M for male, F for female): ");
	scanf("%d", &gender);
	if (marital == 'M') printf("Insured");
	else if (gender == 'M' && age > 30) printf("Insured");
	else if (gender == 'F' && age > 25) printf("Insured");
	else printf("Not Insured");
	return 0;
}
