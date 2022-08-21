/*****************************************************
Calculate total Salary of an Employee (BS, HRA, and DA)
Question: In a company an employee is paid under 
	• If his BS < 1500, then HRA = 10% of BS and DA = 90% of BS
	• Else BS > 1500, then HRA = 500 and DA = 98% of BS

Input:
BS

Output:
Net Salary (BS + HRA + DA)

*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	int bs;
	float ns, hra = 500, da;
	cout << "Enter Basic Salary: ";
	cin >> bs;
	if (bs < 1500)
	{
		hra = 0.1 * bs;
		da = 0.9*bs;
	}
	else
		da = 0.98 * bs;
	ns = bs + hra + da;
	cout.precision(2);
	cout << "Net Salary is " << fixed << ns;
	return 0;
}
