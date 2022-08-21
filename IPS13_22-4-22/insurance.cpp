/*****************************************************
Compute driver is insured or not
Conditions:
i.	If the driver is married, then give insurance
ii.	If the driver is male, unmarried and age is greater than 30, then give insurance
iii.	If the driver is female, unmarried and age is greater than 25, then give insurance
Input:
Marital Status, age, gender
Output:
Insured or Not insured
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	char marital, gender;
	int age;
	cout << "Enter the marital status of the driver (U for unmarried,M for married): ";
	cin >> marital;
	cout << "Enter the age of the driver: ";
	cin >> age;
	cout << "Enter the gender of the driver (M for male, F for female): ";
	cin >> gender;
	if (marital == 'M') cout << "Insured";
	else if (gender  == 'M' && age > 30) cout << "Insured";
	else if (gender == 'F' && age > 25) cout << "Insured";
	else cout << "Not Insured";
	return 0;
}
