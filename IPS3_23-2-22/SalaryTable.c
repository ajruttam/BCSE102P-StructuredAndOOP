/************************************************************************
Calculate the salary as per table

Gender	Years of Experience	Qualification	Salary


Male		>=10			PG	15000
		>=10			UG	10000
		<10			PG	10000
		<10			UG	7000


Female		>=10			PG	12000
		>=10			UG	9000
		<10			PG	10000
		<10			UG	6000

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
