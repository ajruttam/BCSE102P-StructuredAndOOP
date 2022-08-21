/*****************************************************
Compute the bonus of the employee
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	int salary, join_yr, bonus = 25000, cur_yr = 2022;
	cout << "Enter the salary and joining year of the employee: ";
	cin >> salary >> join_yr;
	cout << "Salary of the employee is ";
	if (cur_yr - join_yr >= 3)
		cout << salary + bonus;
	else 
		cout << salary;
	return 0;
}
