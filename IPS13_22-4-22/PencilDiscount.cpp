/*****************************************************
Discount on pencil
*****************************************************/

#include <iostream>
using namespace std;
int main()
{
	int num_p, cost_p, total_cost;
	float discount, final_cost;
	cout << "Enter the number of pencils: ";
	cin >> num_p;
	cout << "Enter the cost of each pencils: ";
	cin >> cost_p;
	total_cost = num_p * cost_p;
	if (total_cost >= 1000)
	{
		discount = 0.1 * total_cost;
		final_cost = total_cost - discount;
	}
	else{
		final_cost = total_cost;
	}
	cout.precision(2);
	cout << "The cost of pencils is " << fixed << final_cost;
	return 0;
}
