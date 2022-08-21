/*****************************************************
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

*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	char gender;
	string qualif;
	int expe;
	cout << "Enter the gender of the employee (M/F): ";
	cin >> gender;
	cout << "Enter the qualification of the employee (UG/PG): ";
	cin >> qualif;
	cout << "Enter the years of experience of the employee: ";
	cin >> expe;
	cout << "The salary of the employee is ";
	if (gender == 'M'){
		if (expe >= 10) {
			if (qualif[0] =='P') cout << 15000;
			else cout << 10000;}
		else{
			if (qualif[0] == 'P') cout << 10000;
			else cout << 7000;
		}}
	else{
		if (expe >= 10) {
			if (qualif[0] == 'P') cout << 12000;
			else cout << 9000;
		}
		else{
			if (qualif[0] == 'P') cout << 10000;
			else cout << 6000;}
	}
	return 0;
}
